#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

// Product Structure
struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

// Function Prototypes
void setColor(int color);
void addProduct();
void viewProducts();
void searchProduct();
void updateStock();
void deleteProduct();
void billingSystem();

// Set Console Color
void setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// ADD PRODUCT
void addProduct()
{
    Product p;

    ofstream file("inventory.dat", ios::binary | ios::app);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n         ADD PRODUCT";
    cout << "\n================================\n";

    setColor(14);

    cout << "Enter Product ID : ";
    cin >> p.id;

    cin.ignore();

    cout << "Enter Product Name : ";
    cin.getline(p.name, 50);

    cout << "Enter Quantity : ";
    cin >> p.quantity;

    cout << "Enter Price : ";
    cin >> p.price;

    file.write((char*)&p, sizeof(p));

    file.close();

    setColor(10);

    cout << "\nProduct Added Successfully!";
}

// VIEW PRODUCTS
void viewProducts()
{
    Product p;

    ifstream file("inventory.dat", ios::binary);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n         PRODUCT LIST";
    cout << "\n================================\n";

    while (file.read((char*)&p, sizeof(p)))
    {
        setColor(14);

        cout << "\nProduct ID   : " << p.id;

        setColor(10);

        cout << "\nProduct Name : " << p.name;
        cout << "\nQuantity     : " << p.quantity;
        cout << "\nPrice        : Rs. " << p.price;

        // Low Stock Alert
        if (p.quantity < 5)
        {
            setColor(12);

            cout << "\nLow Stock Alert!";
        }

        cout << "\n-----------------------------";
    }

    file.close();
}

// SEARCH PRODUCT
void searchProduct()
{
    Product p;
    int id;
    bool found = false;

    ifstream file("inventory.dat", ios::binary);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n        SEARCH PRODUCT";
    cout << "\n================================\n";

    setColor(14);

    cout << "Enter Product ID : ";
    cin >> id;

    while (file.read((char*)&p, sizeof(p)))
    {
        if (p.id == id)
        {
            found = true;

            setColor(10);

            cout << "\nProduct Found!\n";

            cout << "\nProduct Name : " << p.name;
            cout << "\nQuantity     : " << p.quantity;
            cout << "\nPrice        : Rs. " << p.price;

            break;
        }
    }

    file.close();

    if (!found)
    {
        setColor(12);

        cout << "\nProduct Not Found!";
    }
}

// UPDATE STOCK
void updateStock()
{
    Product p;
    int id;
    bool found = false;

    fstream file("inventory.dat", ios::binary | ios::in | ios::out);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n         UPDATE STOCK";
    cout << "\n================================\n";

    setColor(14);

    cout << "Enter Product ID : ";
    cin >> id;

    while (file.read((char*)&p, sizeof(p)))
    {
        if (p.id == id)
        {
            found = true;

            cout << "Enter New Quantity : ";
            cin >> p.quantity;

            int pos = file.tellg();

            file.seekp(pos - sizeof(p));

            file.write((char*)&p, sizeof(p));

            setColor(10);

            cout << "\nStock Updated Successfully!";

            break;
        }
    }

    file.close();

    if (!found)
    {
        setColor(12);

        cout << "\nProduct Not Found!";
    }
}

// DELETE PRODUCT
void deleteProduct()
{
    Product p;
    int id;
    bool found = false;

    ifstream file("inventory.dat", ios::binary);
    ofstream temp("temp.dat", ios::binary);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n         DELETE PRODUCT";
    cout << "\n================================\n";

    setColor(14);

    cout << "Enter Product ID : ";
    cin >> id;

    while (file.read((char*)&p, sizeof(p)))
    {
        if (p.id != id)
        {
            temp.write((char*)&p, sizeof(p));
        }
        else
        {
            found = true;
        }
    }

    file.close();
    temp.close();

    remove("inventory.dat");
    rename("temp.dat", "inventory.dat");

    if (found)
    {
        setColor(10);

        cout << "\nProduct Deleted Successfully!";
    }
    else
    {
        setColor(12);

        cout << "\nProduct Not Found!";
    }
}

// BILLING SYSTEM
void billingSystem()
{
    Product p;
    int id, qty;
    bool found = false;

    ifstream file("inventory.dat", ios::binary);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n          BILLING SYSTEM";
    cout << "\n================================\n";

    setColor(14);

    cout << "Enter Product ID : ";
    cin >> id;

    cout << "Enter Quantity : ";
    cin >> qty;

    while (file.read((char*)&p, sizeof(p)))
    {
        if (p.id == id)
        {
            found = true;

            if (qty > p.quantity)
            {
                setColor(12);

                cout << "\nInsufficient Stock!";
            }
            else
            {
                float total = qty * p.price;

                setColor(10);

                cout << "\nProduct : " << p.name;
                cout << "\nPrice   : Rs. " << p.price;
                cout << "\nTotal   : Rs. " << total;
            }

            break;
        }
    }

    file.close();

    if (!found)
    {
        setColor(12);

        cout << "\nProduct Not Found!";
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
        cout << "\n     INVENTORY MANAGEMENT SYSTEM";
        cout << "\n====================================";

        setColor(14);

        cout << "\n1. Add Product";
        cout << "\n2. View Products";
        cout << "\n3. Search Product";
        cout << "\n4. Update Stock";
        cout << "\n5. Delete Product";
        cout << "\n6. Billing System";
        cout << "\n7. Exit";

        setColor(11);

        cout << "\n\nEnter Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addProduct();
            break;

        case 2:
            viewProducts();
            break;

        case 3:
            searchProduct();
            break;

        case 4:
            updateStock();
            break;

        case 5:
            deleteProduct();
            break;

        case 6:
            billingSystem();
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