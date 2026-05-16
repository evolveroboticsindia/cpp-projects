#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void registerUser()
{
    string username, password;

    cout << "\n===== REGISTER =====\n";

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    ofstream file("users.txt", ios::app);

    file << username << " " << password << endl;

    file.close();

    cout << "\nRegistration Successful!\n";
}

void loginUser()
{
    string username, password;
    string fileUser, filePass;
    bool found = false;

    cout << "\n===== LOGIN =====\n";

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    ifstream file("users.txt");

    while(file >> fileUser >> filePass)
    {
        if(username == fileUser && password == filePass)
        {
            found = true;
            break;
        }
    }

    file.close();

    if(found)
    {
        cout << "\nLogin Successful!\n";
        cout << "Welcome " << username << "!\n";
    }
    else
    {
        cout << "\nInvalid Username or Password!\n";
    }
}

int main()
{
    int choice;

    while(true)
    {
        cout << "\n========================";
        cout << "\n LOGIN SYSTEM PROJECT";
        cout << "\n========================";

        cout << "\n1. Register";
        cout << "\n2. Login";
        cout << "\n3. Exit";

        cout << "\n\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                registerUser();
                break;

            case 2:
                loginUser();
                break;

            case 3:
                cout << "\nThank You!\n";
                return 0;

            default:
                cout << "\nInvalid Choice!";
        }
    }

    return 0;
}