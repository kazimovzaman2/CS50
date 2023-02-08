## HarvardX CS50W: Web Programming with Python and JavaScript

### Course's link
See [here](https://www.edx.org/course/cs50s-web-programming-with-python-and-javascript).



# Star Social

Star Social is a social media platform built using the Django framework as a final project for CS50W. It allows users to sign up, log in, and create posts in groups.

## Distinctiveness

Star Social stands out from other social media platforms in its focus on group creation and interaction. While other platforms may have group functionality, it is often not the main focus of the platform. With Star Social, users have the ability to create and join groups centered around a specific topic or theme, and to engage with other group members through posts within the group. This feature sets Star Social apart and provides a unique experience for its users.

## Complexity 

Star Social was built using the Django framework, which provides a high level of abstraction and simplifies many of the complexities of web development. The application has a relatively simple structure, with user authentication, group creation, and group posts as the main components. However, the complexity of the application lies in the integration of these components and the management of the relationships between them. For example, a user can belong to multiple groups, and a group can have multiple posts and multiple members. These relationships must be managed in a way that ensures data consistency and prevents conflicts. Despite the complexity of these relationships, the Django framework provides a number of tools and features that make the development process manageable and streamlined.



## Features 
- User authentication: Users can sign up and log in using their email and password. 
- Group creation: Users can create and join groups. 
- Group posts: Users can create posts within the groups they belong to. 


## Getting Started 

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. 


## Built With 
- [Django](https://www.djangoproject.com/) - The web framework used 
- [Python](https://www.python.org/) - The programming language 


### Prerequisites 

What things you need to install the software and how to install them: 
- Python
- Django 
- Virtual environment 
- CSS
- HTML 
- Java Script
- SQLite (for development only)


## Installation
1. Clone the repository to your local machine: 
```bash
$ git clone https://github.com/kazimovzaman2/star-social.git
```
2. Create and activate a virtual environment: 
```bash
$ python3 -m venv venv
$ source venv/bin/activate
```
3. Install the required packages: 
```bash
$ pip install -r requirements.txt
```
4. Run migrate
```bash
$ python manage.py migrate
```
5. Run the development server: 
```bash
$ python manage.py runserver
```
Access the application at http://localhost:8000/




## Some functionalities
`Sign Up`: Users can register by providing a unique username and a password. The username and password are used for authentication purposes when logging into the system.

`Login`: Users can log in to the system by providing their registered username and password. This will allow them to access the features and functionalities available in the system.

`Create Group`:
One of the key features of Star Social is the ability for users to create and join groups. This feature allows users to connect with others who share similar interests and engage in discussion and interaction on a specific topic or theme.

To create a group, a user simply needs to click on the "Create Group" button, fill out the form with the group name and description, and click "Create".

When a user joins a group, they become a member and can participate in the discussion by creating posts within the group. The posts are visible to all members of the group, allowing for open and inclusive discussion.


`Join Group`: Joining a group allows you to become a member of a community of individuals who share common interests or goals. By joining a group, you can access exclusive content, participate in discussions, and connect with others who have similar interests. Joining a group may also provide opportunities to network, collaborate, and participate in events or activities.

`Post`: Write a post about your interest. And share you knowledge or interest. You can also delete you post if you don't like



## Conclusion

In conclusion, Star Social is a unique and well-designed social media platform that allows users to create and join groups for discussion and interaction. The platform was built using the Django framework, which provides a high level of abstraction and simplifies the complexities of web development. With its focus on group interaction, Star Social stands out from other social media platforms and provides a unique experience for its users. Whether you are looking to connect with like-minded individuals, engage in discussion on a specific topic, or simply share your thoughts and ideas with a community, Star Social has you covered. So why not give it a try today and see what all the buzz is about!


## Conclusion
The Todo List project is a simple application that demonstrates the use of Django, CSS, and JavaScript. It serves as a starting point for building more complex web applications.


The project's video: https://youtu.be/j8e5cZFx310







## Authors 
- [Zaman Kazimov](https://github.com/kazimovzaman2) - Initial work 

## License 

This project is licensed under the MIT License - see the [LICENSE.md](https://github.com/kazimovzaman2/star-social/blob/master/LICENSE) file for details. 
