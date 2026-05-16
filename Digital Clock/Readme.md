# 🕒 Digital Clock in C++

A console-based Digital Clock developed using C++ that displays the current system time in real-time using a continuously updating clock interface.

The project fetches the current local system time and displays it in:
- 12-hour format
- hours, minutes, and seconds
- AM/PM format

through a clean and simple terminal UI.


# 📌 Project Overview

The Digital Clock project is designed to simulate a real-time digital clock using C++.

The application continuously updates every second and displays the current local system time dynamically.

This project helps in understanding:
- real-time programming concepts
- system time handling
- loops and delays
- console-based UI design


# 🚀 Features

- 🕒 Real-time Digital Clock
- ⏱ Displays Hours, Minutes, and Seconds
- 🌗 12-Hour Format with AM/PM
- 🔄 Automatic Time Refresh Every Second
- 🎨 Simple Console UI
- 💻 Continuous Live Time Display


# 🛠 Technologies Used

| Technology | Purpose |
|---|---|
| C++ | Core Programming Language |
| g++ | Compiler |
| iostream | Input and Output Operations |
| windows.h | Sleep Function |
| ctime | System Time Handling |


# 🧠 Concepts Used

- Functions
- Infinite Loops
- Time Handling
- Conditional Statements
- Console UI Design
- System Delay Functions


# ▶️ How to Compile and Run

## 🔹 Compile

```powershell
g++ digital_clock.cpp -o clock
```

## 🔹 Run

```powershell
.\clock.exe
```


# 🖥 Sample Output

```text
=====================================
          DIGITAL CLOCK
=====================================

08:45:12 PM

=====================================
```


# 📌 Functionalities

## 🕒 Real-Time Clock Display
Displays the current local system time continuously.


## 🌗 12-Hour Time Format
Automatically converts:
- 24-hour format
to
- 12-hour format with AM/PM.


## ⏱ Automatic Time Refresh
The clock updates every second using:

```cpp
Sleep(1000);
```


## 💻 Dynamic Console Refresh
The screen refreshes continuously using:

```cpp
system("cls");
```

to simulate a live digital clock.


# 🔄 Project Workflow

```text
Start Program
      ↓
Fetch Current System Time
      ↓
Convert to Local Time
      ↓
Convert to 12-Hour Format
      ↓
Display Time
      ↓
Wait 1 Second
      ↓
Refresh Screen
      ↓
Repeat Continuously
```


# 📚 Learning Outcomes

This project helps in understanding:

- Real-time clock programming
- System time handling in C++
- Infinite loop implementation
- Console screen refreshing
- Delay handling using Sleep()
- 12-hour time conversion logic

# 🔥 Future Enhancements

- Add Date Display
- Add Day Display
- Alarm System
- Stopwatch Feature
- Timer Feature
- World Clock
- Digital Clock GUI
- Animated Clock UI


# 🚀 Advanced Extension Ideas

## 🔹 Alarm Clock System

Add:
- alarm setting
- buzzer notification
- reminder system


## 🔹 GUI Digital Clock

Develop graphical interface using:
- Qt
- SFML


## 🔹 Embedded Digital Clock

This project can be extended using:

- ESP32
- RTC Module (DS3231)
- OLED Display
- LCD Display

to create a hardware-based digital clock system.