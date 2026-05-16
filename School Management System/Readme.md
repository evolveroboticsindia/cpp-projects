# 🏫 School Management System in C++

A console-based School Management System developed using C++ that helps manage student records through a menu-driven interface.

The project allows users to:
- add student records
- view all students
- search student details
- update student marks
- delete student records

The system automatically calculates student grades based on marks and stores all records permanently using file handling.


# 📌 Project Overview

The School Management System is designed to simulate a basic student record management application used in schools and educational institutions.

Users can manage student information including:
- roll number
- student name
- marks
- grade

The project demonstrates practical implementation of:
- structures
- file handling
- record management
- binary file operations
- menu-driven programming


# 🚀 Features

- ➕ Add Student Records
- 📄 View Student Details
- 🔍 Search Student by Roll Number
- ✏ Update Student Marks
- ❌ Delete Student Records
- 🎯 Automatic Grade Calculation
- 💾 Permanent Data Storage using Files
- 🎨 Colorful Console Interface
- 📋 Menu-driven Navigation


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
- Record Management
- Menu-driven Programming


# ▶️ How to Compile and Run

## 🔹 Compile

```powershell
g++ school.cpp -o school
```

## 🔹 Run

```powershell
.\school.exe
```


# 🖥 Sample Output

```text
====================================
     SCHOOL MANAGEMENT SYSTEM
====================================

1. Add Student
2. View Students
3. Search Student
4. Delete Student
5. Update Student
6. Exit

Enter Choice :
```


# 📌 Functionalities

## ➕ Add Student
Allows users to enter:
- roll number
- student name
- marks

The system automatically calculates and assigns grades.


## 📄 View Students
Displays all student records including:
- roll number
- name
- marks
- grade


## 🔍 Search Student
Allows users to search student details using:
- roll number

and displays matching student information.


## ✏ Update Student
Allows users to update student marks.

The system automatically recalculates:
- grade

after updating marks.


## ❌ Delete Student
Removes a student record permanently from the system.


# 🎯 Grade Calculation System

The project automatically calculates grades based on marks.

| Marks Range | Grade |
|---|---|
| 90 and above | A |
| 75 – 89 | B |
| 50 – 74 | C |
| Below 50 | F |


# 💾 File Handling

The project uses binary file handling with:

```text
students.dat
```

to permanently store student records.

This enables:
- data persistence
- record updating
- student management


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
Select Student Management Operation
      ↓
Perform Record Management Task
      ↓
Update Student Records
      ↓
Display Result
      ↓
Return to Menu
      ↓
Exit
```


# 📚 Learning Outcomes

This project helps in understanding:

- Student record management systems
- File handling in C++
- Binary file operations
- Grade calculation logic
- Record updating techniques
- Console-based application development


# 🔥 Future Enhancements

- Attendance Management
- Teacher Management System
- Subject-wise Marks Entry
- Percentage Calculation
- Report Card Generation
- Student Login System
- Database Integration
- GUI Version using Qt
- Online Student Portal


# 🚀 Advanced Extension Ideas

## 🔹 Complete School ERP System

Extend the project with:
- attendance tracking
- fee management
- timetable scheduling
- examination modules


## 🔹 Embedded + Smart Classroom System

This project can be extended using:

- ESP32
- RFID Attendance System
- LCD Display
- Cloud Database
- Fingerprint Authentication

to create a smart classroom management system.