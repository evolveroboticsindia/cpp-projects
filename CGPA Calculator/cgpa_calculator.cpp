#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

// Function to set color
void setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// Convert Grade to Grade Point
float getGradePoint(char grade)
{
    switch (toupper(grade))
    {
        case 'S': return 10;
        case 'A': return 9;
        case 'B': return 8;
        case 'C': return 7;
        case 'D': return 6;
        case 'E': return 5;
        default: return 0;
    }
}

int main()
{
    int subjects;

    system("cls");

    setColor(11);

    cout << "\n======================================";
    cout << "\n        CGPA CALCULATOR SYSTEM";
    cout << "\n======================================\n";

    setColor(14);

    cout << "\nEnter Number of Subjects : ";
    cin >> subjects;

    string subjectName[50];
    int credits[50];
    char grades[50];

    float totalCredits = 0;
    float totalPoints = 0;

    // Input Section
    for (int i = 0; i < subjects; i++)
    {
        setColor(11);

        cout << "\n================================";
        cout << "\nSubject " << i + 1;
        cout << "\n================================\n";

        setColor(14);

        cout << "Enter Subject Name : ";
        cin >> subjectName[i];

        cout << "Enter Credits      : ";
        cin >> credits[i];

        cout << "Enter Grade (S/A/B/C/D/E/F) : ";
        cin >> grades[i];

        float gradePoint = getGradePoint(grades[i]);

        totalCredits += credits[i];
        totalPoints += (credits[i] * gradePoint);
    }

    // CGPA Calculation
    float cgpa = totalPoints / totalCredits;

    // Display Report
    system("cls");

    setColor(11);

    cout << "\n==============================================";
    cout << "\n             STUDENT REPORT";
    cout << "\n==============================================\n";

    setColor(14);

    cout << left << setw(15) << "Subject"
         << setw(10) << "Credits"
         << setw(10) << "Grade"
         << setw(10) << "Point" << endl;

    cout << "----------------------------------------------\n";

    for (int i = 0; i < subjects; i++)
    {
        cout << left << setw(15) << subjectName[i]
             << setw(10) << credits[i]
             << setw(10) << grades[i]
             << setw(10) << getGradePoint(grades[i]) << endl;
    }

    cout << "----------------------------------------------\n";

    setColor(10);

    cout << "\nTotal Credits : " << totalCredits;
    cout << "\nCGPA          : " << fixed << setprecision(2) << cgpa;

    // Classification
    setColor(13);

    if (cgpa >= 9)
        cout << "\nPerformance   : Outstanding";
    else if (cgpa >= 8)
        cout << "\nPerformance   : Excellent";
    else if (cgpa >= 7)
        cout << "\nPerformance   : Very Good";
    else if (cgpa >= 6)
        cout << "\nPerformance   : Good";
    else if (cgpa >= 5)
        cout << "\nPerformance   : Average";
    else
        cout << "\nPerformance   : Needs Improvement";

    setColor(11);

    cout << "\n\n==============================================\n";

    return 0;
}