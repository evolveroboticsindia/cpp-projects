# 📦 Inventory Management System in C++

A console-based Inventory Management System developed using C++ that helps manage product inventory efficiently through a menu-driven interface.

The project allows users to:
- add products
- view inventory records
- search products
- update stock
- delete products
- generate bills

The system uses file handling to store product records permanently and provides a colorful console UI for better user interaction.

# 📌 Project Overview

The Inventory Management System is designed to simulate a basic product inventory and billing application used in shops and small businesses.

Users can manage product information including:
- product ID
- product name
- quantity
- price

The project demonstrates practical implementation of:
- structures
- file handling
- binary file operations
- record management
- menu-driven programming


# 🚀 Features

- ➕ Add New Products
- 📄 View Product Inventory
- 🔍 Search Product by ID
- 🔄 Update Product Stock
- ❌ Delete Product Records
- 🧾 Billing System
- 💾 Permanent Data Storage using Files
- ⚠ Low Stock Alert
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
- Menu-driven Programming
- Record Management Systems

# ▶️ How to Compile and Run

## 🔹 Compile

```powershell
g++ inventory.cpp -o inventory
```

## 🔹 Run

```powershell
.\inventory.exe
```

# 🖥 Sample Output

```text
====================================
     INVENTORY MANAGEMENT SYSTEM
====================================

1. Add Product
2. View Products
3. Search Product
4. Update Stock
5. Delete Product
6. Billing System
7. Exit

Enter Choice :
```

# 📌 Functionalities

## ➕ Add Product
Allows users to add new products by entering:
- product ID
- product name
- quantity
- price
The product details are stored permanently in a file.

## 📄 View Products
Displays all stored products along with:
- product ID
- product name
- quantity
- price

The system also shows a:
- ⚠ Low Stock Alert

when product quantity becomes less than 5.


## 🔍 Search Product
Allows users to search product details using:
- product ID

and displays matching product information.



## 🔄 Update Stock
Allows users to modify product quantity and update inventory records.



## ❌ Delete Product
Removes a product record permanently from the inventory system.


## 🧾 Billing System
Generates a simple bill based on:
- selected product
- quantity purchased

The system automatically calculates:
- total amount

and checks:
- stock availability


# 💾 File Handling

The project uses binary file handling with:

```text
inventory.dat
```

to permanently store inventory records.

This enables:
- data persistence
- record updating
- product management


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
Select Inventory Operation
      ↓
Perform Product Management Task
      ↓
Update Inventory Records
      ↓
Display Result
      ↓
Return to Menu
      ↓
Exit
```


# 📚 Learning Outcomes
This project helps in understanding:
- Inventory management workflow
- File handling in C++
- Binary file operations
- Product record management
- Billing system logic
- Menu-driven console applications


# 🔥 Future Enhancements
- Barcode Scanner Integration
- Product Category Management
- GST/Tax Calculation
- Sales Report Generation
- Admin Authentication System
- Database Integration
- GUI Version using Qt
- Product Expiry Tracking
- Invoice Printing


# 🚀 Advanced Extension Ideas
## 🔹 Smart Retail Management System
Extend the project with:
- automated billing
- stock analytics
- sales tracking
- customer management

## 🔹 Embedded + IoT Inventory System
This project can be extended using
- ESP32
- RFID Module
- Barcode Scanner
- OLED Display
- Cloud Database
to create a smart inventory monitoring system.