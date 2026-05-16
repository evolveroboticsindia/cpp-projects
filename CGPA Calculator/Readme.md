# 🎓 CGPA Calculator System in C++

A console-based CGPA Calculator System developed using C++ that calculates a student’s CGPA based on subject credits and grades.

The project allows users to:
- enter subject details
- assign grades and credits
- calculate total credits
- generate CGPA automatically
- display academic performance classification

The application also provides a colorful console interface for better user interaction.


# 📌 Project Overview

The CGPA Calculator System is designed to simplify academic grade calculations by automating the CGPA computation process.

Users can input:
- subject names
- credits
- grades

and the system calculates:
- grade points
- total credits
- CGPA
- performance category

This project demonstrates practical implementation of:
- arrays
- functions
- loops
- conditional statements
- formatted output handling in C++


# 🚀 Features

- 📘 Subject-wise Grade Entry
- 🧮 Automatic CGPA Calculation
- 📊 Grade Point Conversion
- 📄 Student Academic Report
- 🎯 Performance Classification
- 🎨 Colorful Console Interface
- 📋 Formatted Table Display


# 🛠 Technologies Used

| Technology | Purpose |
|---|---|
| C++ | Core Programming Language |
| g++ | Compiler |
| iostream | Input and Output Operations |
| windows.h | Console Color Handling |
| iomanip | Formatted Table Display |


# 🧠 Concepts Used

- Functions
- Arrays
- Loops
- Conditional Statements
- Switch Case
- String Handling
- Formatted Output
- Menu-driven Logic


# ▶️ How to Compile and Run

## 🔹 Compile

```powershell
g++ cgpa.cpp -o cgpa
```

## 🔹 Run

```powershell
.\cgpa.exe
```


# 🖥 Sample Output

```text
======================================
        CGPA CALCULATOR SYSTEM
======================================

Enter Number of Subjects : 3
```


# 📌 Functionalities

## 📘 Subject Entry
Users can enter:
- subject name
- subject credits
- grade obtained


## 🧮 Grade Point Calculation

The system converts grades into grade points using the following scale:

| Grade | Grade Point |
|---|---|
| S | 10 |
| A | 9 |
| B | 8 |
| C | 7 |
| D | 6 |
| E | 5 |
| F | 0 |


## 📊 CGPA Calculation

CGPA is calculated using:

```text
CGPA = Total Grade Points / Total Credits
```


## 📄 Student Report

Displays:
- subject details
- credits
- grades
- grade points
- total credits
- final CGPA

in a formatted tabular structure.


## 🎯 Performance Classification

Based on calculated CGPA:

| CGPA Range | Performance |
|---|---|
| 9.0 and above | Outstanding |
| 8.0 – 8.9 | Excellent |
| 7.0 – 7.9 | Very Good |
| 6.0 – 6.9 | Good |
| 5.0 – 5.9 | Average |
| Below 5.0 | Needs Improvement |


# 🎨 Console Color Scheme

| Color | Usage |
|---|---|
| Cyan | Headings |
| Yellow | User Inputs |
| Green | CGPA Result |
| Purple | Performance Status |
| White | General Text |


# 🔄 Project Workflow

```text
Start Program
      ↓
Enter Number of Subjects
      ↓
Enter Subject Details
      ↓
Convert Grades to Grade Points
      ↓
Calculate Total Credits
      ↓
Calculate CGPA
      ↓
Generate Student Report
      ↓
Display Performance
      ↓
Exit
```

# 📚 Learning Outcomes

This project helps in understanding:

- CGPA calculation logic
- Grade point systems
- Array implementation in C++
- Formatted output handling
- Function-based programming
- Academic report generation


# 🔥 Future Enhancements

- GPA Calculation by Semester
- File Handling Support
- Student Database System
- Multiple Student Reports
- PDF Report Generation
- GUI Version using Qt
- Percentage Conversion
- Graphical Analytics Dashboard


# 🚀 Advanced Extension Ideas

## 🔹 Student Management System

Extend this project into a complete:
- student database
- attendance system
- marks management system

## 🔹 Embedded Academic Dashboard

This project can be extended using:
- ESP32
- LCD Display
- RFID Student Identification
to create a smart academic monitoring system.