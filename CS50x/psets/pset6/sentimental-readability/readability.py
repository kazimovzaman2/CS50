from cs50 import get_string

text = get_string("Text: ")

letters = 0
words = 0
sentences = 0
digits = 0
special = 0

for i in text:
    # if alphabet
    if i.isalpha():
        letters += 1
    # if numeric
    elif i.isnumeric():
        digits += 1
    # if space
    elif i == ' ':
        words += 1
    # if pointe or etcetre
    elif i == "." or i == "!" or i == "?":
        sentences += 1
    else:
        special += 1

# Get L - the average number of letters per 100 words in the text
L = float(letters / words * 100)

# Get S - the average number of sentences per 100 words in the text
S = float(sentences / words * 100)

# Readbility
index = round((float)(0.0588 * L - 0.296 * S - 15.8))


# Output
if index < 1:
    print("Before Grade 1")

elif index >= 16:
    print("Grade 16+")

else:
    print("Grade ", index)