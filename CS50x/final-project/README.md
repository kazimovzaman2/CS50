# Note Taking Website
#### Video Demo: https://youtu.be/a8T-mYDrkt4
#### Description:
In this project there is website, instance folder and main.py file.

There is database.db file which collecting information about website.

I write this program in my pc because of this there is a mian.py file.

In main.py file I run the app. And i get create_app function from website folder. This function is located in \_\_init__.py file.

In website folder there are static and templates folder, auth.py, models.py, \_\_init__.py and views.py.

In static folder I write java script code for deleting user note.

#### Models
In models.py file I write a code for database schema. I use sqlalchemy for database. There are Note, User classes. Note class cotain id (primary key), data, date. And user_id is ForeignKey which comes from user_id.
And in User class there are id (primary key), email, password, first_name and notes. notes is relational with Note class.

In auth.py file there are login, logout, and sign_up functions.

#### Login
In login function i use POST and Get methods. In Post method we get email and password. And we check the password hash is same with input password. Else incorrect.

#### Logout
In logout it redirected to login page.

#### Sign Up
In sign-up if method is get sign_up.html is rendered. If it is post method we take email, first_name, password1, password2 form input. And we have some checks. If email is in database error "Email already exists". If email is less than 4 error "Email must be greater than 3 characters". If firstname character less than 2 error "First name must be greater than 1 character". If password1 and passwor2 is not match error "Passwords don't match". And lastly password is less than 7 error "Password must be at least 7 characters".
Password take email, firstname, password and send to database. By the way i encrypt the password with sha256
If everythin is allright flash give us "Accoun created!" message.
And we got to the home page.

#### Views
In views.py file there are index, and delete_note functions. In index function i get user note. If length of note is less than 1 error "Note is too short!". Otherwise note added to the database. And get "Note added".
Then get home.html.
In delete function i use javascript for deleting added note and then send to database

#### Init
\_\_init__.py file there is Flask function, and caches

#### Templates
There are 4 file: base.html, home.html, login.html, sign_up.html
1. base.html - is layout of my website. I use bootstrap for css. And title give jinja. Navbar created. And if user logged in he/she see Home and Logout buttons. Otherwise Login and Signup. In below there are error messages and alerts. Also i write jinja for content of body
2. login.html - is login page of my website. It asks email address and password for authentication.
3. sign_up.html - is signup page of my website. It ask email address firstname password1 and password2 (for confirmtation)
4. home.html - is home (main) page of my website. If method is POST it ask note for adding. If GET method it shows us lasts added notes. And also we use delete functionality in here.