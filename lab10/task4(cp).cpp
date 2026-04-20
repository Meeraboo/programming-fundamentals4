#include <iostream>
#include <cmath>
using namespace std;
string projectTimeCalculation(int neededHours, int days, int workers)
{
    // Remove training days(10%)
    double workingDays = days * 0.9;

    // Calculate total working hours
    double totalHours = workingDays * 8 * workers;

    // round down
    int finalHours = floor(totalHours);

    // compare with needed hours
    if (finalHours >= neededHours)
    {
        int hoursLeft = finalHours - neededHours;
        return "Yes! " + to_string(hoursLeft) + " hours left.";
    }
    else
    {
        int extraHours = neededHours - finalHours;
        return "Not enough time! " + to_string(extraHours) + " hours needed.";
    }
}

int main()
{
    int neededHours, days, workers;

    cout << "Enter needed hours: ";
    cin >> neededHours;

    cout << "Enter number of days of firm: ";
    cin >> days;

    cout << "Enter number of workers: ";
    cin >> workers;

    string result = projectTimeCalculation(neededHours, days, workers);

    cout << result << endl;

    return 0;
}