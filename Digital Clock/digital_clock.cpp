#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

void digitalClock()
{
    while (true)
    {
        // Clear screen
        system("cls");

        // Get current time
        time_t now = time(0);

        // Convert to local time
        tm *ltm = localtime(&now);

        int hour = ltm->tm_hour;
        int minute = ltm->tm_min;
        int second = ltm->tm_sec;

        string period = "AM";

        // Convert to 12-hour format
        if (hour >= 12)
        {
            period = "PM";
        }

        if (hour > 12)
        {
            hour -= 12;
        }

        if (hour == 0)
        {
            hour = 12;
        }

        // UI Design
        cout << "\n\n";
        cout << "=====================================\n";
        cout << "          DIGITAL CLOCK              \n";
        cout << "=====================================\n\n";

        // Time display
        if (hour < 10) cout << "0";
        cout << hour << ":";

        if (minute < 10) cout << "0";
        cout << minute << ":";

        if (second < 10) cout << "0";
        cout << second << " ";

        cout << period;

        cout << "\n\n=====================================\n";

        // Wait 1 second
        Sleep(1000);
    }
}

int main()
{
    digitalClock();

    return 0;
}