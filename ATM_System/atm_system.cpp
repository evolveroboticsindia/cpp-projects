#include <iostream>
#include <windows.h>

using namespace std;

// Global Variables
int balance = 5000000;
int pin = 1234;

// Function Declarations
void setColor(int color);
void login();
void menu();
void checkBalance();
void depositMoney();
void withdrawMoney();
void miniStatement();

// Function to Set Console Color
void setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// LOGIN FUNCTION
void login()
{
    int enteredPin;
    int attempts = 3;

    while (attempts > 0)
    {
        system("cls");

        setColor(11); // Cyan
        cout << "\n====================================";
        cout << "\n           ATM LOGIN";
        cout << "\n====================================\n";

        setColor(14); // Yellow
        cout << "\nEnter 4-Digit PIN : ";
        cin >> enteredPin;

        if (enteredPin == pin)
        {
            setColor(10); // Green
            cout << "\nLogin Successful!";
            Sleep(1000);

            menu();
            return;
        }
        else
        {
            attempts--;

            setColor(12); // Red
            cout << "\nIncorrect PIN!";
            cout << "\nRemaining Attempts : " << attempts;

            Sleep(1500);
        }
    }

    setColor(12);
    cout << "\n\nCard Blocked!";
}

// CHECK BALANCE
void checkBalance()
{
    setColor(11);

    cout << "\n================================";
    cout << "\n         BALANCE INFO";
    cout << "\n================================";

    setColor(10);

    cout << "\n\nCurrent Balance : Rs. " << balance << endl;
}

// DEPOSIT MONEY
void depositMoney()
{
    int amount;

    setColor(11);

    cout << "\n================================";
    cout << "\n         DEPOSIT MONEY";
    cout << "\n================================";

    setColor(14);

    cout << "\n\nEnter Amount : ";
    cin >> amount;

    if (amount > 0)
    {
        balance += amount;

        setColor(10);

        cout << "\nRs. " << amount << " Deposited Successfully!";
        cout << "\nUpdated Balance : Rs. " << balance;
    }
    else
    {
        setColor(12);

        cout << "\nInvalid Amount!";
    }
}

// WITHDRAW MONEY
void withdrawMoney()
{
    int amount;

    setColor(11);

    cout << "\n================================";
    cout << "\n        WITHDRAW MONEY";
    cout << "\n================================";

    setColor(14);

    cout << "\n\nEnter Amount : ";
    cin >> amount;

    if (amount <= 0)
    {
        setColor(12);

        cout << "\nInvalid Amount!";
    }
    else if (amount > balance)
    {
        setColor(12);

        cout << "\nInsufficient Balance!";
    }
    else
    {
        balance -= amount;

        setColor(10);

        cout << "\nPlease Collect Your Cash...";
        Sleep(1500);

        cout << "\nWithdrawal Successful!";
        cout << "\nRemaining Balance : Rs. " << balance;
    }
}

// MINI STATEMENT
void miniStatement()
{
    setColor(11);

    cout << "\n================================";
    cout << "\n        MINI STATEMENT";
    cout << "\n================================";

    setColor(10);

    cout << "\n\nAvailable Balance : Rs. " << balance;

    setColor(13);

    cout << "\n\nThank You For Banking With Us!";
}

// MENU
void menu()
{
    int choice;

    do
    {
        system("cls");

        setColor(9); // Blue

        cout << "\n====================================";
        cout << "\n           ATM MACHINE";
        cout << "\n====================================";

        setColor(14); // Yellow

        cout << "\n1. Check Balance";
        cout << "\n2. Deposit Money";
        cout << "\n3. Withdraw Money";
        cout << "\n4. Mini Statement";
        cout << "\n5. Exit";

        setColor(11);

        cout << "\n\nEnter Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            checkBalance();
            break;

        case 2:
            depositMoney();
            break;

        case 3:
            withdrawMoney();
            break;

        case 4:
            miniStatement();
            break;

        case 5:
            setColor(10);

            cout << "\nThank You For Using ATM!";
            break;

        default:
            setColor(12);

            cout << "\nInvalid Choice!";
        }

        if (choice != 5)
        {
            setColor(7);

            cout << "\n\nPress Enter to Continue...";
            cin.ignore();
            cin.get();
        }

    } while (choice != 5);
}

// MAIN FUNCTION
int main()
{
    // Background Black + Bright Text
    system("color 0");

    login();

    return 0;
}