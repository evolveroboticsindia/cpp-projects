# 🏨 Hotel Booking System in C++

A console-based Hotel Booking System developed using C++ that simulates basic hotel room booking and management operations.

The project allows users to:
- book hotel rooms
- view bookings
- search customer details
- check room availability
- cancel bookings

through a colorful and interactive terminal interface.

The application also uses file handling to store booking records permanently.


# 📌 Project Overview

The Hotel Booking System is designed to manage hotel room reservations efficiently through a menu-driven application.

Users can:
- reserve rooms
- view customer booking details
- check available rooms
- cancel room bookings

The system stores booking data in a binary file, allowing records to remain saved even after the program is closed.

This project demonstrates practical implementation of:
- structures
- file handling
- functions
- menu-driven programming
- console UI design


# 🚀 Features

- 🛏 Book Hotel Rooms
- 📄 View All Bookings
- 🔍 Search Customer by Room Number
- 🟢 Check Available Rooms
- ❌ Cancel Room Booking
- 💾 File Handling for Permanent Storage
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
- Loops
- Conditional Statements
- Binary File Operations
- Menu-driven Programming
- Console UI Design


# ▶️ How to Compile and Run

## 🔹 Compile

```powershell
g++ hotel.cpp -o hotel
```

## 🔹 Run

```powershell
.\hotel.exe
```


# 🖥 Sample Output

```text
====================================
       HOTEL BOOKING SYSTEM
====================================

1. Book Room
2. View Bookings
3. Search Customer
4. Available Rooms
5. Cancel Booking
6. Exit

Enter Choice :
```


# 📌 Functionalities

## 🛏 Book Room
Allows users to:
- enter room number
- enter customer name
- specify number of booking days

The booking information is stored permanently in a file.


## 📄 View Bookings
Displays:
- room number
- customer name
- booking duration
- booking status

for all stored room records.


## 🔍 Search Customer
Searches customer booking details using:
- room number

and displays booking information if found.


## 🟢 Available Rooms
Displays rooms that are currently available and not booked.


## ❌ Cancel Booking
Allows users to cancel an existing room booking by entering the room number.

The room status is updated automatically.


# 💾 File Handling

The project uses binary file handling:

```text
hotel.dat
```

to permanently store hotel booking records.

This allows:
- data persistence
- record management
- updating booking status


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
Select Operation
      ↓
Perform Booking Operation
      ↓
Update File Records
      ↓
Display Result
      ↓
Return to Menu
      ↓
Exit
```


# 📚 Learning Outcomes

This project helps in understanding:

- Hotel booking system workflow
- File handling in C++
- Binary file operations
- Structure implementation
- Record management systems
- Console-based application development


# 🔥 Future Enhancements

- Room Categories (Standard, Deluxe, Suite)
- Customer Phone Number Storage
- Billing System
- Check-in / Check-out Dates
- Admin Login System
- Room Price Calculation
- Payment Gateway Integration
- GUI Version using Qt
- Database Integration


# 🚀 Advanced Extension Ideas

## 🔹 Smart Hotel Management System

Extend the project with:
- RFID room access
- automated billing
- smart room control

## 🔹 Embedded + IoT Hotel System

This project can be extended using:

- ESP32
- RFID Module
- OLED Display
- Smart Door Lock
- WiFi Monitoring

to create a smart hotel automation system.