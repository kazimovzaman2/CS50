## HarvardX CS50W: Web Programming with Python and JavaScript

### Course's link
See [here](https://www.edx.org/course/cs50s-web-programming-with-python-and-javascript).



# Todo List

A Todo List project built with Django, HTML, CSS, and JavaScript for the cs50w final project.

## Distinctiveness and Complexity
This project satisfies the distinctiveness and complexity requirements as it implements a full-fledged todo list application with essential features such as adding, updating, deleting, and notifications items. The use of Django as the web framework adds a layer of complexity as it requires a deeper understanding of web development concepts such as views, models, and forms. The integration of CSS and JavaScript enhances the user experience and adds to the project's complexity.



## Installation
  - Install project dependencies by running `pip install -r requirements.txt`. Dependencies include Django and Pillow module that allows Django to work with images.
  - Make and apply migrations by running `python manage.py makemigrations` and `python manage.py migrate`.
  - Create superuser with `python manage.py createsuperuser`. This step is optional.
  - Go to website address and register an account.


## Technologies Used
<ul>
  <li>Django</li>
  <li>CSS</li>
  <li>HTML</li>
  <li>JavaScript</li>
</ul>


#### Files and directories
  - `base` - main application directory.
    - `templates/djangoapp` contains all application templates.
        - `main.html` - base templates. All other tempalates extend it.
        - `login.html` - login page.
        - `notifications.html` - notification page.
        - `register.html` - templates for register.
        - `task_confirm_delete.html` - confirm delete page.
        - `task_form.html` - task template.
        - `task_list.html` - task list templatet.
        - `task.html` - test for template.
    - `admin.py` - here I added some admin classes and models.
    - `models.py` contains 2 models I used in the project. `Notification` model for record notification, `Task` model is for tasks.
    - `urls.py` - all application URLs.
    - `views.py` respectively, contains all application views.
  - `todo_list` - project directory.


## Requirements
The following packages are required to run the project:
<ul>
  <li>Django</li>
  <li>SQLite (for development only)</li>
</ul>


## Some functionalities
`Register`: Users can register by providing a unique username and a password. The username and password are used for authentication purposes when logging into the system.

`Login`: Users can log in to the system by providing their registered username and password. This will allow them to access the features and functionalities available in the system.

`Create Task`: Users can create tasks by providing a title, description, and specifying if the task is complete or not. The task can be a reminder, a to-do item, or any other type of task that the user wants to track. The task details are stored in the system and can be viewed, edited, and managed by the user.

`Change position of tasks`: You can change the places of tasks through 3 points

`Delete Task`: It is possible to delete a task if it is no longer needed or if the user wants to remove it from their list. Deleting a task will permanently remove it from the system and it will not be recoverable. In some cases, it may be useful to keep a record of completed tasks for reference or for reporting purposes. To delete a task, the user simply needs to select the task and confirm the deletion action.

`Updating and Marking Tasks as Completed`: Once a task has been created, users have the ability to update the task information and mark it as completed. This can help users keep track of their progress and manage their workload effectively. To update a task, the user can access the task details, modify the information as needed, and save the changes. To mark a task as completed, the user can select the task and change its status to "completed." This may also involve updating the task description or other details to reflect its completion status. By updating and marking tasks as completed, users can ensure that their task information is accurate and up-to-date, and they can easily see what tasks they have already completed and what tasks are still outstanding.

`Searching for Tasks`: Searching for tasks is a convenient way to quickly locate specific tasks within a list of many tasks. By entering a keyword or phrase related to the task, the user can easily find the task they are looking for, even among a large number of tasks. With the ability to search for tasks, users can quickly access the information they need and manage their tasks efficiently.




## Contributions
If you would like to contribute to the project, please feel free to create a pull request or open an issue for discussion.

## Conclusion
The Todo List project is a simple application that demonstrates the use of Django, CSS, and JavaScript. It serves as a starting point for building more complex web applications.


The project's video: https://youtu.be/BfRJTACFCMc