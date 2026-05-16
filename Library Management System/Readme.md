# 📚 Library Management System in C++

A console-based Library Management System developed using C++ that helps manage library book records through a menu-driven interface.

The project allows users to:
- add books
- view book records
- search books
- issue books
- return books
- delete books

The application uses file handling to permanently store library records and provides a colorful console interface for better user interaction.


# 📌 Project Overview

The Library Management System is designed to simulate a basic library record management application used in schools, colleges, and public libraries.

Users can manage book information including:
- book ID
- book name
- author name
- issue status

The project demonstrates practical implementation of:
- structures
- file handling
- binary file operations
- record management
- menu-driven programming


# 🚀 Features

- ➕ Add New Books
- 📄 View Book Records
- 🔍 Search Book by ID
- 📖 Issue Books
- 🔄 Return Books
- ❌ Delete Book Records
- 💾 Permanent Data Storage using Files
- 📋 Book Availability Status
- 🎨 Colorful Console Interface
- 📑 Menu-driven Navigation


# 🛠 Technologies Used

| Technology | Purpose |
|---|---|
| C++ | Core Programming Language |
| g++ | Compiler |
| iostream | Input and Output Operations |
| fstream | File Handling |
| windows.h | Console Color Handling |


# 🧠 Concepts Used

- Structures
- Functions
- File Handling
- Binary File Operations
- Loops
- Conditional Statements
- Menu-driven Programming
- Record Management Systems


# ▶️ How to Compile and Run

## 🔹 Compile

```powershell
g++ library.cpp -o library
```

## 🔹 Run

```powershell
.\library.exe
```


# 🖥 Sample Output

```text
====================================
      LIBRARY MANAGEMENT SYSTEM
====================================

1. Add Book
2. View Books
3. Search Book
4. Issue Book
5. Return Book
6. Delete Book
7. Exit

Enter Choice :
```


# 📌 Functionalities

## ➕ Add Book
Allows users to add new books by entering:
- book ID
- book name
- author name

The book record is stored permanently in a file.


## 📄 View Books
Displays all stored book records including:
- book ID
- book name
- author name
- availability status


## 🔍 Search Book
Allows users to search book details using:
- book ID

and displays matching book information.


## 📖 Issue Book
Allows users to issue books.

The system automatically updates the book status to:
- Issued

and prevents already issued books from being issued again.


## 🔄 Return Book
Allows users to return issued books.

The system automatically updates the book status to:
- Available


## ❌ Delete Book
Removes a book record permanently from the library system.


# 💾 File Handling

The project uses binary file handling with:

```text
library.dat
```

to permanently store library records.

This enables:
- data persistence
- record updating
- issue/return management


# 🎨 Console Color Scheme

| Color | Usage |
|---|---|
| Blue | Main Menu |
| Cyan | Headings |
| Yellow | User Inputs |
| Green | Success Messages |
| Red | Error Messages |
| White | General Text |


# 🔄 Project Workflow

```text
Start Program
      ↓
Display Main Menu
      ↓
Select Library Operation
      ↓
Perform Book Management Task
      ↓
Update Library Records
      ↓
Display Result
      ↓
Return to Menu
      ↓
Exit
```

# 📚 Learning Outcomes

This project helps in understanding:

- Library management workflow
- File handling in C++
- Binary file operations
- Book issue/return systems
- Record management techniques
- Console-based application development


# 🔥 Future Enhancements

- Student Borrower Management
- Fine Calculation System
- Book Categories
- Due Date Tracking
- Admin Authentication
- Database Integration
- GUI Version using Qt
- Barcode Scanner Support
- Online Library Portal


# 🚀 Advanced Extension Ideas

## 🔹 Smart Digital Library System

Extend the project with:
- online book reservation
- QR code scanning
- automated fine management
- cloud database storage


## 🔹 Embedded + IoT Library System

This project can be extended using:

- ESP32
- RFID Tags
- RFID Reader
- OLED Display
- Cloud Database

to create a smart library automation system.