from django.db import models
from django.contrib.auth.models import User
# Create your models here.

class Notification(models.Model):
    user = models.ForeignKey(User, on_delete=models.CASCADE)
    message = models.CharField(max_length=255)
    read = models.BooleanField(default=False)
    created_at = models.DateTimeField(auto_now_add=True)


class Task(models.Model):
    user = models.ForeignKey(User, on_delete=models.CASCADE, null=True, blank=True)
    title = models.CharField(max_length=200)
    description = models.TextField(null=True, blank=True)
    complete = models.BooleanField(default=False)
    created = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return self.title

    def save(self, *args, **kwargs):
        is_new = self._state.adding
        super().save(*args, **kwargs)
        if is_new:
            Notification.objects.create(user=self.user, message=f"Task '{self.title}' was created.")

    def delete(self, *args, **kwargs):
        Notification.objects.create(user=self.user, message=f"Task '{self.title}' was deleted.")
        super().delete(*args, **kwargs)

    class Meta:
        order_with_respect_to = 'user'
