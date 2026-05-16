#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>   // For getch()
#include <windows.h> // For Sleep()

using namespace std;

// Function to hide password input
string hiddenPassword()
{
    string password;
    char ch;

    while (true)
    {
        ch = getch();

        // Enter key
        if (ch == 13)
        {
            cout << endl;
            break;
        }

        // Backspace handling
        else if (ch == 8)
        {
            if (!password.empty())
            {
                password.pop_back();
                cout << "\b \b";
            }
        }

        // Normal character
        else
        {
            password += ch;
            cout << "*";
        }
    }

    return password;
}

// Register Function
void registerUser()
{
    string username, password;

    cout << "\n================================";
    cout << "\n        USER REGISTRATION";
    cout << "\n================================\n";

    cout << "Enter Username : ";
    cin >> username;

    cout << "Enter Password : ";
    password = hiddenPassword();

    ofstream file("users.txt", ios::app);

    file << username << " " << password << endl;

    file.close();

    cout << "\nRegistration Successful!\n";
}

// Login Function
bool loginUser()
{
    string username, password;
    string fileUser, filePass;

    bool found = false;
    int attempts = 3;

    while (attempts > 0)
    {
        cout << "\n================================";
        cout << "\n            LOGIN";
        cout << "\n================================\n";

        cout << "Enter Username : ";
        cin >> username;

        cout << "Enter Password : ";
        password = hiddenPassword();

        ifstream file("users.txt");

        while (file >> fileUser >> filePass)
        {
            if (username == fileUser && password == filePass)
            {
                found = true;
                break;
            }
        }

        file.close();

        if (found)
        {
            cout << "\nLogin Successful!";
            cout << "\nWelcome " << username << "!\n";

            Sleep(1000);
            return true;
        }
        else
        {
            attempts--;

            cout << "\nInvalid Username or Password!";
            cout << "\nRemaining Attempts : " << attempts << endl;
        }
    }

    cout << "\nToo Many Failed Attempts!";
    return false;
}

// Forgot Password Function
void forgotPassword()
{
    string username;
    string fileUser, filePass;
    bool found = false;

    cout << "\n================================";
    cout << "\n        FORGOT PASSWORD";
    cout << "\n================================\n";

    cout << "Enter Username : ";
    cin >> username;

    ifstream file("users.txt");

    while (file >> fileUser >> filePass)
    {
        if (username == fileUser)
        {
            found = true;
            break;
        }
    }

    file.close();

    if (found)
    {
        cout << "\nPassword Found!";
        cout << "\nYour Password is : " << filePass << endl;
    }
    else
    {
        cout << "\nUsername Not Found!\n";
    }
}

// Dashboard
void dashboard()
{
    int choice;

    do
    {
        cout << "\n================================";
        cout << "\n          DASHBOARD";
        cout << "\n================================";

        cout << "\n1. Profile";
        cout << "\n2. Settings";
        cout << "\n3. Logout";

        cout << "\n\nEnter Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nProfile Section\n";
            break;

        case 2:
            cout << "\nSettings Section\n";
            break;

        case 3:
            cout << "\nLogging Out...\n";
            break;

        default:
            cout << "\nInvalid Choice!";
        }

    } while (choice != 3);
}

// Main Function
int main()
{
    int choice;

    while (true)
    {
        cout << "\n\n####################################";
        cout << "\n#        LOGIN SYSTEM PROJECT      #";
        cout << "\n####################################";

        cout << "\n\n1. Register";
        cout << "\n2. Login";
        cout << "\n3. Forgot Password";
        cout << "\n4. Exit";

        cout << "\n\nEnter Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            registerUser();
            break;

        case 2:
            if (loginUser())
            {
                dashboard();
            }
            break;

        case 3:
            forgotPassword();
            break;

        case 4:
            cout << "\nThank You!\n";
            return 0;

        default:
            cout << "\nInvalid Choice!";
        }
    }

    return 0;
}