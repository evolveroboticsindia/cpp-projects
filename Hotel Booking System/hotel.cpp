#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

// Structure
struct Hotel
{
    int roomNo;
    char name[50];
    int days;
    bool booked;
};

// Function Prototypes
void setColor(int color);
void bookRoom();
void viewBookings();
void searchCustomer();
void availableRooms();
void cancelBooking();

// Set Console Color
void setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// BOOK ROOM
void bookRoom()
{
    Hotel h;

    ofstream file("hotel.dat", ios::binary | ios::app);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n          BOOK ROOM";
    cout << "\n================================\n";

    setColor(14);

    cout << "Enter Room Number : ";
    cin >> h.roomNo;

    cin.ignore();

    cout << "Enter Customer Name : ";
    cin.getline(h.name, 50);

    cout << "Enter Number of Days : ";
    cin >> h.days;

    h.booked = true;

    file.write((char*)&h, sizeof(h));

    file.close();

    setColor(10);

    cout << "\nRoom Booked Successfully!";
}

// VIEW BOOKINGS
void viewBookings()
{
    Hotel h;

    ifstream file("hotel.dat", ios::binary);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n         HOTEL BOOKINGS";
    cout << "\n================================\n";

    while (file.read((char*)&h, sizeof(h)))
    {
        setColor(14);

        cout << "\nRoom Number : " << h.roomNo;

        setColor(10);

        cout << "\nCustomer    : " << h.name;
        cout << "\nDays        : " << h.days;

        if (h.booked)
        {
            setColor(12);
            cout << "\nStatus      : Booked";
        }
        else
        {
            setColor(10);
            cout << "\nStatus      : Available";
        }

        cout << "\n-----------------------------";
    }

    file.close();
}

// SEARCH CUSTOMER
void searchCustomer()
{
    Hotel h;
    int room;
    bool found = false;

    ifstream file("hotel.dat", ios::binary);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n        SEARCH CUSTOMER";
    cout << "\n================================\n";

    setColor(14);

    cout << "Enter Room Number : ";
    cin >> room;

    while (file.read((char*)&h, sizeof(h)))
    {
        if (h.roomNo == room)
        {
            found = true;

            setColor(10);

            cout << "\nBooking Found!\n";

            cout << "\nCustomer Name : " << h.name;
            cout << "\nDays          : " << h.days;

            if (h.booked)
            {
                setColor(12);
                cout << "\nStatus        : Booked";
            }
            else
            {
                setColor(10);
                cout << "\nStatus        : Available";
            }

            break;
        }
    }

    file.close();

    if (!found)
    {
        setColor(12);

        cout << "\nBooking Not Found!";
    }
}

// AVAILABLE ROOMS
void availableRooms()
{
    Hotel h;

    ifstream file("hotel.dat", ios::binary);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n        ROOM STATUS";
    cout << "\n================================\n";

    while (file.read((char*)&h, sizeof(h)))
    {
        if (!h.booked)
        {
            setColor(10);

            cout << "\nRoom Number : " << h.roomNo;
        }
    }

    file.close();

    cout << "\n\nAvailable Room Check Complete!";
}

// CANCEL BOOKING
void cancelBooking()
{
    Hotel h;
    int room;
    bool found = false;

    fstream file("hotel.dat", ios::binary | ios::in | ios::out);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n        CANCEL BOOKING";
    cout << "\n================================\n";

    setColor(14);

    cout << "Enter Room Number : ";
    cin >> room;

    while (file.read((char*)&h, sizeof(h)))
    {
        if (h.roomNo == room)
        {
            found = true;

            h.booked = false;

            int pos = file.tellg();

            file.seekp(pos - sizeof(h));

            file.write((char*)&h, sizeof(h));

            setColor(10);

            cout << "\nBooking Cancelled Successfully!";

            break;
        }
    }

    file.close();

    if (!found)
    {
        setColor(12);

        cout << "\nRoom Not Found!";
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
        cout << "\n       HOTEL BOOKING SYSTEM";
        cout << "\n====================================";

        setColor(14);

        cout << "\n1. Book Room";
        cout << "\n2. View Bookings";
        cout << "\n3. Search Customer";
        cout << "\n4. Available Rooms";
        cout << "\n5. Cancel Booking";
        cout << "\n6. Exit";

        setColor(11);

        cout << "\n\nEnter Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            bookRoom();
            break;

        case 2:
            viewBookings();
            break;

        case 3:
            searchCustomer();
            break;

        case 4:
            availableRooms();
            break;

        case 5:
            cancelBooking();
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