#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function declaration
string timeTravel(int hours, int minutes);

int main()
{
    int hours, minutes;

    cout << "Current Time Traveler" << endl;
    cout << "=====================" << endl;
    cout << "Enter current hour (0-23): ";
    cin >> hours;

    cout << "Enter current minute (0-59): ";
    cin >> minutes;

    // Validate input
    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59)
    {
        cout << "Error! Invalid time entered." << endl;
        return 1;
    }

    string futureTime = timeTravel(hours, minutes);

    cout << "\nCurrent Time: " << setw(2) << setfill('0') << hours << ":"
         << setw(2) << setfill('0') << minutes << endl;
    cout << "After time travel (+15 minutes): " << futureTime << endl;

    return 0;
}

// Function definition
string timeTravel(int hours, int minutes)
{
    int newMinutes = minutes + 15;
    int newHours = hours;

    if (newMinutes >= 60)
    {
        newMinutes -= 60;
        newHours += 1;
    }

    if (newHours >= 24)
    {
        newHours -= 24;
    }

    string result = "";

    if (newHours < 10)
    {
        result += "0";
    }
    result += to_string(newHours);
    result += ":";

    if (newMinutes < 10)
    {
        result += "0";
    }
    result += to_string(newMinutes);

    return result;
}