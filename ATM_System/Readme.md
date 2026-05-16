# 🏧 ATM Management System in C++

A console-based ATM Management System developed using C++ that simulates basic banking operations such as balance inquiry, cash deposit, withdrawal, and mini statement generation.

The project provides a simple and interactive terminal interface with secure PIN-based authentication and colorful console UI.

# 📌 Project Overview

This project replicates the workflow of a basic ATM machine.  
Users can log in using a 4-digit PIN and perform different banking operations through a menu-driven interface.

The main objective of this project is to understand:
- real-world ATM transaction flow
- authentication systems
- menu-driven programming
- console application development using C++

# 🚀 Features

- 🔐 PIN-based Login Authentication
- 💰 Check Account Balance
- 💵 Deposit Money
- 🏧 Withdraw Money
- 📄 Mini Statement
- 🎨 Colorful Console Interface
- ❌ Invalid Input Handling
- 🔁 Menu-driven Navigation
- 🔒 Limited Login Attempts

# 🛠 Technologies Used

| Technology | Purpose |
|---|---|
| C++ | Core Programming Language |
| g++ | Compiler |
| windows.h | Console Color Handling |
| iostream | Input and Output Operations |


# 🧠 Concepts Used

- Functions
- Loops
- Conditional Statements
- Global Variables
- Switch Case
- Menu-driven Programming
- Console UI Design


# ▶️ How to Compile and Run

## 🔹 Compile

```powershell
g++ atm_system.cpp -o atm
```

## 🔹 Run

```powershell
.\atm.exe
```

---

# 🔑 Default Login PIN

```text
1234
```

# 🖥 Sample Output

```text
====================================
           ATM MACHINE
====================================

1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Mini Statement
5. Exit

Enter Choice :
```


# 📌 Functionalities

## 🔐 Login System
- User must enter the correct 4-digit PIN.
- Maximum 3 attempts allowed.
- Card gets blocked after multiple incorrect attempts.


## 💰 Balance Inquiry
Displays the current account balance.


## 💵 Deposit Money
Allows users to deposit money into the account and updates the balance.


## 🏧 Withdraw Money
Allows users to withdraw money after checking:
- valid amount
- sufficient account balance


## 📄 Mini Statement
Displays available account balance and transaction information.


# 🎨 Console Color Scheme

| Color | Usage |
|---|---|
| Blue | Main Menu |
| Cyan | Headings |
| Yellow | User Inputs |
| Green | Success Messages |
| Red | Error Messages |
| Purple | Information Messages |


# 🔄 Project Workflow

```text
Start Program
      ↓
Login Screen
      ↓
PIN Verification
      ↓
Main Menu
      ↓
Perform Banking Operation
      ↓
Return to Menu
      ↓
Exit
```

# 📚 Learning Outcomes

This project helps in understanding:

- ATM transaction workflow
- User authentication systems
- Banking operation logic
- Menu-driven applications
- Console UI customization
- Core C++ programming concepts


# 🔥 Future Enhancements

- File Handling for Permanent Data Storage
- Multiple User Accounts
- Hidden PIN Input
- Transaction History
- Receipt Generation
- Database Integration
- GUI Version using Qt
- OTP Verification System
- Fingerprint Authentication


# 🚀 Advanced Extension Ideas

## 🔹 Smart ATM System using Embedded Systems

This project can be extended using:

- ESP32
- RFID Reader
- Keypad
- OLED Display
- Fingerprint Sensor

to create a smart ATM prototype with hardware integration.
