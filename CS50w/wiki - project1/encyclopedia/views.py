from django.shortcuts import render, redirect
from django.urls import reverse
from django.http import HttpResponseRedirect
import markdown2
import random

from . import util



def index(request):
    return render(request, "encyclopedia/index.html", {
        "entries": util.list_entries()
    })

def title(request, title):

    if not util.get_entry(title):
        return render(request, "encyclopedia/error.html", {
            "message": "The page you're looking for doesn't exist.",
        })

    return render(request, "encyclopedia/title.html", {
        "content": markdown2.markdown(util.get_entry(title)),
        "title": title,
    })

def search(request):
    if request.method == "POST":
        entry_search = request.POST['q']

        if util.get_entry(entry_search) is not None:
            return HttpResponseRedirect(reverse("title", args=[entry_search]))
        else:
            allEntries = util.list_entries()
            recommendation = []

            for entry in allEntries:
                if entry_search.lower() in entry.lower():
                    recommendation.append(entry)
            return render(request, "encyclopedia/search.html", {
                "recommendation": recommendation
            })

def newPage(request):
    if request.method == "GET":
        return render(request, "encyclopedia/newpage.html")
    else:
        title = request.POST['title']
        content = request.POST['content']

        if util.get_entry(title):
            return render(request, "encyclopedia/error.html", {
                "message": "Entry page already exist.",
            })
        else:
            util.save_entry(title, content)
            return HttpResponseRedirect(reverse("title", args=[title]))


def edit(request):
    if request.method == 'POST':
        title = request.POST['entry_title']
        content = util.get_entry(title)
        return render(request, "encyclopedia/edit.html", {
            "title": title,
            "content": content,
        })

def save_edit(request):
    if request.method == "POST":
        title = request.POST['title']
        content = request.POST['content']
        util.save_entry(title, content)
        return HttpResponseRedirect(reverse("title", args=[title]))

def rand(request):
    allEntries = util.list_entries()
    rand_entry = random.choice(allEntries)
    return HttpResponseRedirect(reverse("title", args=[rand_entry]))