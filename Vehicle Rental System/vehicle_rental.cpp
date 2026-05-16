#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

// Structure
struct Vehicle
{
    int id;
    char name[50];
    int rentPerDay;
    bool rented;
};

// Function Prototypes
void setColor(int color);
void addVehicle();
void viewVehicles();
void rentVehicle();
void returnVehicle();
void searchVehicle();

// Set Console Color
void setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// ADD VEHICLE
void addVehicle()
{
    Vehicle v;

    ofstream file("vehicles.dat", ios::binary | ios::app);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n         ADD VEHICLE";
    cout << "\n================================\n";

    setColor(14);

    cout << "Enter Vehicle ID : ";
    cin >> v.id;

    cin.ignore();

    cout << "Enter Vehicle Name : ";
    cin.getline(v.name, 50);

    cout << "Enter Rent Per Day : ";
    cin >> v.rentPerDay;

    v.rented = false;

    file.write((char*)&v, sizeof(v));

    file.close();

    setColor(10);

    cout << "\nVehicle Added Successfully!";
}

// VIEW VEHICLES
void viewVehicles()
{
    Vehicle v;

    ifstream file("vehicles.dat", ios::binary);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n         VEHICLE LIST";
    cout << "\n================================\n";

    while (file.read((char*)&v, sizeof(v)))
    {
        setColor(14);

        cout << "\nVehicle ID   : " << v.id;

        setColor(10);

        cout << "\nVehicle Name : " << v.name;
        cout << "\nRent/Day     : Rs. " << v.rentPerDay;

        if (v.rented)
        {
            setColor(12);

            cout << "\nStatus       : Rented";
        }
        else
        {
            setColor(10);

            cout << "\nStatus       : Available";
        }

        cout << "\n-----------------------------";
    }

    file.close();
}

// SEARCH VEHICLE
void searchVehicle()
{
    Vehicle v;
    int id;
    bool found = false;

    ifstream file("vehicles.dat", ios::binary);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n        SEARCH VEHICLE";
    cout << "\n================================\n";

    setColor(14);

    cout << "Enter Vehicle ID : ";
    cin >> id;

    while (file.read((char*)&v, sizeof(v)))
    {
        if (v.id == id)
        {
            found = true;

            setColor(10);

            cout << "\nVehicle Found!\n";

            cout << "\nVehicle Name : " << v.name;
            cout << "\nRent Per Day : Rs. " << v.rentPerDay;

            if (v.rented)
            {
                setColor(12);

                cout << "\nStatus       : Rented";
            }
            else
            {
                setColor(10);

                cout << "\nStatus       : Available";
            }

            break;
        }
    }

    file.close();

    if (!found)
    {
        setColor(12);

        cout << "\nVehicle Not Found!";
    }
}

// RENT VEHICLE
void rentVehicle()
{
    Vehicle v;
    int id, days;
    bool found = false;

    fstream file("vehicles.dat", ios::binary | ios::in | ios::out);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n         RENT VEHICLE";
    cout << "\n================================\n";

    setColor(14);

    cout << "Enter Vehicle ID : ";
    cin >> id;

    while (file.read((char*)&v, sizeof(v)))
    {
        if (v.id == id)
        {
            found = true;

            if (v.rented)
            {
                setColor(12);

                cout << "\nVehicle Already Rented!";
            }
            else
            {
                cout << "Enter Number of Days : ";
                cin >> days;

                int total = days * v.rentPerDay;

                v.rented = true;

                int pos = file.tellg();

                file.seekp(pos - sizeof(v));

                file.write((char*)&v, sizeof(v));

                setColor(10);

                cout << "\nVehicle Rented Successfully!";
                cout << "\nTotal Rent : Rs. " << total;
            }

            break;
        }
    }

    file.close();

    if (!found)
    {
        setColor(12);

        cout << "\nVehicle Not Found!";
    }
}

// RETURN VEHICLE
void returnVehicle()
{
    Vehicle v;
    int id;
    bool found = false;

    fstream file("vehicles.dat", ios::binary | ios::in | ios::out);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n        RETURN VEHICLE";
    cout << "\n================================\n";

    setColor(14);

    cout << "Enter Vehicle ID : ";
    cin >> id;

    while (file.read((char*)&v, sizeof(v)))
    {
        if (v.id == id)
        {
            found = true;

            if (!v.rented)
            {
                setColor(12);

                cout << "\nVehicle Was Not Rented!";
            }
            else
            {
                v.rented = false;

                int pos = file.tellg();

                file.seekp(pos - sizeof(v));

                file.write((char*)&v, sizeof(v));

                setColor(10);

                cout << "\nVehicle Returned Successfully!";
            }

            break;
        }
    }

    file.close();

    if (!found)
    {
        setColor(12);

        cout << "\nVehicle Not Found!";
    }
}

// MAIN FUNCTION
int main()
{
    int choice;

    do
    {
        system("cls");

        setColor(9);

        cout << "\n====================================";
        cout << "\n      VEHICLE RENTAL SYSTEM";
        cout << "\n====================================";

        setColor(14);

        cout << "\n1. Add Vehicle";
        cout << "\n2. View Vehicles";
        cout << "\n3. Search Vehicle";
        cout << "\n4. Rent Vehicle";
        cout << "\n5. Return Vehicle";
        cout << "\n6. Exit";

        setColor(11);

        cout << "\n\nEnter Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addVehicle();
            break;

        case 2:
            viewVehicles();
            break;

        case 3:
            searchVehicle();
            break;

        case 4:
            rentVehicle();
            break;

        case 5:
            returnVehicle();
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