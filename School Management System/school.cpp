#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

// Structure
struct Student
{
    int roll;
    char name[50];
    int marks;
    char grade;
};

// Function Prototypes
void setColor(int color);
void addStudent();
void viewStudents();
void searchStudent();
void deleteStudent();
void updateStudent();
char calculateGrade(int marks);

// Set Console Color
void setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// Calculate Grade
char calculateGrade(int marks)
{
    if (marks >= 90)
        return 'A';
    else if (marks >= 75)
        return 'B';
    else if (marks >= 50)
        return 'C';
    else
        return 'F';
}

// ADD STUDENT
void addStudent()
{
    Student s;

    ofstream file("students.dat", ios::binary | ios::app);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n         ADD STUDENT";
    cout << "\n================================\n";

    setColor(14);

    cout << "\nEnter Roll Number : ";
    cin >> s.roll;

    cin.ignore();

    cout << "Enter Name : ";
    cin.getline(s.name, 50);

    cout << "Enter Marks : ";
    cin >> s.marks;

    s.grade = calculateGrade(s.marks);

    file.write((char*)&s, sizeof(s));

    file.close();

    setColor(10);

    cout << "\nStudent Added Successfully!";
}

// VIEW STUDENTS
void viewStudents()
{
    Student s;

    ifstream file("students.dat", ios::binary);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n         STUDENT RECORDS";
    cout << "\n================================\n";

    while (file.read((char*)&s, sizeof(s)))
    {
        setColor(14);

        cout << "\nRoll Number : " << s.roll;

        setColor(10);

        cout << "\nName        : " << s.name;
        cout << "\nMarks       : " << s.marks;
        cout << "\nGrade       : " << s.grade;

        cout << "\n-----------------------------";
    }

    file.close();
}

// SEARCH STUDENT
void searchStudent()
{
    Student s;
    int roll;
    bool found = false;

    ifstream file("students.dat", ios::binary);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n        SEARCH STUDENT";
    cout << "\n================================\n";

    setColor(14);

    cout << "\nEnter Roll Number : ";
    cin >> roll;

    while (file.read((char*)&s, sizeof(s)))
    {
        if (s.roll == roll)
        {
            found = true;

            setColor(10);

            cout << "\nStudent Found!\n";

            cout << "\nName   : " << s.name;
            cout << "\nMarks  : " << s.marks;
            cout << "\nGrade  : " << s.grade;

            break;
        }
    }

    file.close();

    if (!found)
    {
        setColor(12);

        cout << "\nStudent Not Found!";
    }
}

// DELETE STUDENT
void deleteStudent()
{
    Student s;
    int roll;
    bool found = false;

    ifstream file("students.dat", ios::binary);
    ofstream temp("temp.dat", ios::binary);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n        DELETE STUDENT";
    cout << "\n================================\n";

    setColor(14);

    cout << "\nEnter Roll Number : ";
    cin >> roll;

    while (file.read((char*)&s, sizeof(s)))
    {
        if (s.roll != roll)
        {
            temp.write((char*)&s, sizeof(s));
        }
        else
        {
            found = true;
        }
    }

    file.close();
    temp.close();

    remove("students.dat");
    rename("temp.dat", "students.dat");

    if (found)
    {
        setColor(10);

        cout << "\nStudent Deleted Successfully!";
    }
    else
    {
        setColor(12);

        cout << "\nStudent Not Found!";
    }
}

// UPDATE STUDENT
void updateStudent()
{
    Student s;
    int roll;
    bool found = false;

    fstream file("students.dat", ios::binary | ios::in | ios::out);

    system("cls");

    setColor(11);

    cout << "\n================================";
    cout << "\n        UPDATE STUDENT";
    cout << "\n================================\n";

    setColor(14);

    cout << "\nEnter Roll Number : ";
    cin >> roll;

    while (file.read((char*)&s, sizeof(s)))
    {
        if (s.roll == roll)
        {
            found = true;

            cout << "\nEnter New Marks : ";
            cin >> s.marks;

            s.grade = calculateGrade(s.marks);

            int pos = file.tellg();

            file.seekp(pos - sizeof(s));

            file.write((char*)&s, sizeof(s));

            setColor(10);

            cout << "\nRecord Updated Successfully!";

            break;
        }
    }

    file.close();

    if (!found)
    {
        setColor(12);

        cout << "\nStudent Not Found!";
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
        cout << "\n     SCHOOL MANAGEMENT SYSTEM";
        cout << "\n====================================";

        setColor(14);

        cout << "\n1. Add Student";
        cout << "\n2. View Students";
        cout << "\n3. Search Student";
        cout << "\n4. Delete Student";
        cout << "\n5. Update Student";
        cout << "\n6. Exit";

        setColor(11);

        cout << "\n\nEnter Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            viewStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            deleteStudent();
            break;

        case 5:
            updateStudent();
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