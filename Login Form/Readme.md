# 🔐 Login System Project in C++

A console-based Login System developed using C++ that provides secure user authentication through registration and login functionality.

The project allows users to:
- register new accounts
- log in securely
- recover forgotten passwords
- access a simple dashboard

The application uses file handling to store user credentials permanently and includes hidden password input for improved security.


# 📌 Project Overview

The Login System Project is designed to simulate a basic user authentication system used in many real-world applications.

Users can create accounts using:
- username
- password

The system stores user credentials in a text file and verifies login details during authentication.

This project demonstrates practical implementation of:
- authentication systems
- password masking
- file handling
- loops
- menu-driven programming


# 🚀 Features

- 📝 User Registration
- 🔐 Secure Login System
- 👁 Hidden Password Input
- 🔑 Forgot Password Recovery
- 📋 User Dashboard
- 💾 Permanent User Storage using Files
- 🔒 Limited Login Attempts
- 📑 Menu-driven Interface


# 🛠 Technologies Used

| Technology | Purpose |
|---|---|
| C++ | Core Programming Language |
| g++ | Compiler |
| iostream | Input and Output Operations |
| fstream | File Handling |
| conio.h | Hidden Password Input |
| windows.h | Delay Functions |


# 🧠 Concepts Used

- Functions
- File Handling
- Strings
- Loops
- Conditional Statements
- Authentication Logic
- Password Masking
- Menu-driven Programming


# ▶️ How to Compile and Run

## 🔹 Compile

```powershell
g++ login_form.cpp -o login
g++ login_2.cpp -o login
```

## 🔹 Run

```powershell
.\login.exe
```


# 🖥 Sample Output

```text
####################################
#        LOGIN SYSTEM PROJECT      #
####################################

1. Register
2. Login
3. Forgot Password
4. Exit

Enter Choice :
```


# 📌 Functionalities

## 📝 User Registration
Allows users to create new accounts by entering:
- username
- password

The credentials are stored permanently in:

```text
users.txt
```


## 🔐 Login System
Authenticates users by verifying:
- username
- password

The system provides:
- maximum 3 login attempts

before denying access.


## 👁 Hidden Password Input
Passwords are hidden during typing using:

```cpp
getch()
```

to improve security and user privacy.


## 🔑 Forgot Password
Allows users to recover passwords by entering:
- username

The system searches stored records and displays the associated password.


## 📋 Dashboard
After successful login, users can access:
- profile section
- settings section
- logout option


# 💾 File Handling

The project uses text file handling with:

```text
users.txt
```

to permanently store:
- usernames
- passwords

This enables:
- persistent login data
- user authentication
- account management


# 🔄 Project Workflow

```text
Start Program
      ↓
Display Main Menu
      ↓
Select Operation
      ↓
Register / Login / Recover Password
      ↓
Authenticate User
      ↓
Access Dashboard
      ↓
Logout
      ↓
Exit
```


# 📚 Learning Outcomes

This project helps in understanding:

- User authentication systems
- File handling in C++
- Password masking techniques
- Login validation logic
- Record searching
- Console-based application development


# 🔥 Future Enhancements

- Password Encryption
- OTP Verification
- Email Authentication
- Admin Panel
- User Profile Editing
- Password Reset System
- Database Integration
- GUI Version using Qt
- Multi-user Authentication


# 🚀 Advanced Extension Ideas

## 🔹 Secure Authentication System

Enhance the project with:
- hashed passwords
- two-factor authentication
- OTP login
- account locking


## 🔹 Embedded + IoT Login System

This project can be extended using:

- ESP32
- RFID Authentication
- Keypad
- OLED Display
- Fingerprint Sensor

to create a smart embedded login and access control system.