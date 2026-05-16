#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

// Structure for Book
struct Book
{
    int id;
    char name[50];
    char author[50];
    bool issued;
};

// Function Prototypes
void setColor(int color);
void addBook();
void viewBooks();
void searchBook();
void issueBook();
void returnBook();
void deleteBook();

// Set Console Color
void setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// ADD BOOK
void addBook()
{
    Book b;

    ofstream file("library.dat", ios::binary | ios::app);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n           ADD BOOK";
    cout << "\n================================\n";

    setColor(14);

    cout << "Enter Book ID      : ";
    cin >> b.id;

    cin.ignore();

    cout << "Enter Book Name    : ";
    cin.getline(b.name, 50);

    cout << "Enter Author Name  : ";
    cin.getline(b.author, 50);

    b.issued = false;

    file.write((char*)&b, sizeof(b));

    file.close();

    setColor(10);

    cout << "\nBook Added Successfully!";
}

// VIEW BOOKS
void viewBooks()
{
    Book b;

    ifstream file("library.dat", ios::binary);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n          BOOK RECORDS";
    cout << "\n================================\n";

    while (file.read((char*)&b, sizeof(b)))
    {
        setColor(14);

        cout << "\nBook ID     : " << b.id;

        setColor(10);

        cout << "\nBook Name   : " << b.name;
        cout << "\nAuthor      : " << b.author;

        if (b.issued)
        {
            setColor(12);
            cout << "\nStatus      : Issued";
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

// SEARCH BOOK
void searchBook()
{
    Book b;
    int id;
    bool found = false;

    ifstream file("library.dat", ios::binary);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n         SEARCH BOOK";
    cout << "\n================================\n";

    setColor(14);

    cout << "Enter Book ID : ";
    cin >> id;

    while (file.read((char*)&b, sizeof(b)))
    {
        if (b.id == id)
        {
            found = true;

            setColor(10);

            cout << "\nBook Found!\n";

            cout << "\nBook Name : " << b.name;
            cout << "\nAuthor    : " << b.author;

            if (b.issued)
            {
                setColor(12);
                cout << "\nStatus    : Issued";
            }
            else
            {
                setColor(10);
                cout << "\nStatus    : Available";
            }

            break;
        }
    }

    file.close();

    if (!found)
    {
        setColor(12);

        cout << "\nBook Not Found!";
    }
}

// ISSUE BOOK
void issueBook()
{
    Book b;
    int id;
    bool found = false;

    fstream file("library.dat", ios::binary | ios::in | ios::out);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n          ISSUE BOOK";
    cout << "\n================================\n";

    setColor(14);

    cout << "Enter Book ID : ";
    cin >> id;

    while (file.read((char*)&b, sizeof(b)))
    {
        if (b.id == id)
        {
            found = true;

            if (b.issued)
            {
                setColor(12);

                cout << "\nBook Already Issued!";
            }
            else
            {
                b.issued = true;

                int pos = file.tellg();

                file.seekp(pos - sizeof(b));

                file.write((char*)&b, sizeof(b));

                setColor(10);

                cout << "\nBook Issued Successfully!";
            }

            break;
        }
    }

    file.close();

    if (!found)
    {
        setColor(12);

        cout << "\nBook Not Found!";
    }
}

// RETURN BOOK
void returnBook()
{
    Book b;
    int id;
    bool found = false;

    fstream file("library.dat", ios::binary | ios::in | ios::out);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n         RETURN BOOK";
    cout << "\n================================\n";

    setColor(14);

    cout << "Enter Book ID : ";
    cin >> id;

    while (file.read((char*)&b, sizeof(b)))
    {
        if (b.id == id)
        {
            found = true;

            if (!b.issued)
            {
                setColor(12);

                cout << "\nBook Was Not Issued!";
            }
            else
            {
                b.issued = false;

                int pos = file.tellg();

                file.seekp(pos - sizeof(b));

                file.write((char*)&b, sizeof(b));

                setColor(10);

                cout << "\nBook Returned Successfully!";
            }

            break;
        }
    }

    file.close();

    if (!found)
    {
        setColor(12);

        cout << "\nBook Not Found!";
    }
}

// DELETE BOOK
void deleteBook()
{
    Book b;
    int id;
    bool found = false;

    ifstream file("library.dat", ios::binary);
    ofstream temp("temp.dat", ios::binary);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n         DELETE BOOK";
    cout << "\n================================\n";

    setColor(14);

    cout << "Enter Book ID : ";
    cin >> id;

    while (file.read((char*)&b, sizeof(b)))
    {
        if (b.id != id)
        {
            temp.write((char*)&b, sizeof(b));
        }
        else
        {
            found = true;
        }
    }

    file.close();
    temp.close();

    remove("library.dat");
    rename("temp.dat", "library.dat");

    if (found)
    {
        setColor(10);

        cout << "\nBook Deleted Successfully!";
    }
    else
    {
        setColor(12);

        cout << "\nBook Not Found!";
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
        cout << "\n      LIBRARY MANAGEMENT SYSTEM";
        cout << "\n====================================";

        setColor(14);

        cout << "\n1. Add Book";
        cout << "\n2. View Books";
        cout << "\n3. Search Book";
        cout << "\n4. Issue Book";
        cout << "\n5. Return Book";
        cout << "\n6. Delete Book";
        cout << "\n7. Exit";

        setColor(11);

        cout << "\n\nEnter Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addBook();
            break;

        case 2:
            viewBooks();
            break;

        case 3:
            searchBook();
            break;

        case 4:
            issueBook();
            break;

        case 5:
            returnBook();
            break;

        case 6:
            deleteBook();
            break;

        case 7:
            setColor(10);

            cout << "\nThank You!";
            break;

        default:
            setColor(12);

            cout << "\nInvalid Choice!";
        }

        if (choice != 7)
        {
            setColor(7);

            cout << "\n\nPress Enter to Continue...";
            cin.ignore();
            cin.get();
        }

    } while (choice != 7);

    return 0;
}