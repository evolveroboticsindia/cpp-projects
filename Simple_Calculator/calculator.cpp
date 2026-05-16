#include <iostream>
#include <windows.h>

using namespace std;

// Function to set console color
void setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main()
{
    float num1, num2, result;
    int choice;

    do
    {
        system("cls");

        setColor(11);

        cout << "\n====================================";
        cout << "\n        SIMPLE CALCULATOR";
        cout << "\n====================================";

        setColor(14);

        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. Modulus";
        cout << "\n6. Exit";

        setColor(11);

        cout << "\n\nEnter Your Choice : ";
        cin >> choice;

        if (choice >= 1 && choice <= 5)
        {
            setColor(14);

            cout << "\nEnter First Number  : ";
            cin >> num1;

            cout << "Enter Second Number : ";
            cin >> num2;
        }

        switch (choice)
        {
        case 1:
            result = num1 + num2;

            setColor(10);

            cout << "\nResult = " << result;
            break;

        case 2:
            result = num1 - num2;

            setColor(10);

            cout << "\nResult = " << result;
            break;

        case 3:
            result = num1 * num2;

            setColor(10);

            cout << "\nResult = " << result;
            break;

        case 4:
            if (num2 == 0)
            {
                setColor(12);

                cout << "\nDivision by Zero Not Allowed!";
            }
            else
            {
                result = num1 / num2;

                setColor(10);

                cout << "\nResult = " << result;
            }
            break;

        case 5:
            setColor(10);

            cout << "\nModulus = " << (int)num1 % (int)num2;
            break;

        case 6:
            setColor(10);

            cout << "\nThank You!";
            break;

        default:
            setColor(12);

            cout << "\nInvalid Choice!";
        }

        if (choice != 6)
        {
            setColor(7);

            cout << "\n\nPress Enter to Continue...";
            cin.ignore();
            cin.get();
        }

    } while (choice != 6);

    return 0;
}