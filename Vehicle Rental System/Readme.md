# 🚗 Vehicle Rental System in C++

A console-based Vehicle Rental System developed using C++ that helps manage vehicle rental operations through an interactive menu-driven interface.

The project allows users to:
- add vehicles
- view available vehicles
- search vehicle details
- rent vehicles
- return rented vehicles

The application uses file handling to permanently store vehicle records and provides a colorful console UI for better user experience.


# 📌 Project Overview

The Vehicle Rental System is designed to simulate a basic vehicle rental management application used in car and bike rental services.

Users can manage vehicle records including:
- vehicle ID
- vehicle name
- rental price per day
- rental status

The project demonstrates practical implementation of:
- structures
- file handling
- binary file operations
- record management
- menu-driven programming


# 🚀 Features

- ➕ Add New Vehicles
- 📄 View Vehicle Records
- 🔍 Search Vehicle by ID
- 🚘 Rent Vehicle
- 🔄 Return Vehicle
- 💾 Permanent Data Storage using Files
- 📋 Vehicle Availability Status
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
g++ vehicle_rental.cpp -o vehicle
```

## 🔹 Run

```powershell
.\vehicle.exe
```


# 🖥 Sample Output

```text
====================================
      VEHICLE RENTAL SYSTEM
====================================

1. Add Vehicle
2. View Vehicles
3. Search Vehicle
4. Rent Vehicle
5. Return Vehicle
6. Exit

Enter Choice :
```


# 📌 Functionalities

## ➕ Add Vehicle
Allows users to add vehicle details including:
- vehicle ID
- vehicle name
- rent per day

The vehicle record is stored permanently in a file.


## 📄 View Vehicles
Displays all stored vehicle records including:
- vehicle ID
- vehicle name
- rent per day
- rental status


## 🔍 Search Vehicle
Allows users to search vehicle details using:
- vehicle ID

and displays matching vehicle information.


## 🚘 Rent Vehicle
Allows users to rent a vehicle by:
- selecting vehicle ID
- entering rental duration

The system automatically:
- calculates total rent
- updates rental status


## 🔄 Return Vehicle
Allows users to return rented vehicles and updates the vehicle status to:
- Available


# 💾 File Handling

The project uses binary file handling with:

```text
vehicles.dat
```

to permanently store vehicle records.

This enables:
- data persistence
- record updating
- rental status management


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
Select Rental Operation
      ↓
Perform Vehicle Management Task
      ↓
Update Vehicle Records
      ↓
Display Result
      ↓
Return to Menu
      ↓
Exit
```


# 📚 Learning Outcomes

This project helps in understanding:

- Vehicle rental workflow
- File handling in C++
- Binary file operations
- Record management systems
- Rental status management
- Console-based application development


# 🔥 Future Enhancements

- Customer Management System
- Driver Information Storage
- Vehicle Categories
- Billing & Invoice Generation
- Fine Calculation for Late Returns
- Admin Authentication System
- Database Integration
- GUI Version using Qt
- Online Vehicle Booking


# 🚀 Advanced Extension Ideas

## 🔹 Smart Vehicle Rental Platform

Extend the project with:
- online booking
- payment integration
- GPS tracking
- automated billing


## 🔹 Embedded + IoT Vehicle System

This project can be extended using:

- ESP32
- GPS Module
- RFID Authentication
- OLED Display
- Cloud Database

to create a smart vehicle rental and tracking system.