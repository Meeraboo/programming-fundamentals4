#include <iostream>
using namespace std;
int main()
{
    int holidays;
    cout << "holidays: ";
    cin >> holidays;
    int working_days = 365 - holidays;
    int time_for_games = (63 * working_days) + (127 * holidays);
    int norm = 30000;

        if (time_for_games > norm)
    {
        int extra = time_for_games - norm;
        int hours = extra / 60;
        int minutes = extra % 60;
        cout << "tom will run away\n"
             << hours << " hours  and" << minutes << " minutes more  for play" << endl;
    }
    else
    {
        int less = norm - time_for_games;
        int hours = less / 60;
        int minutes = less % 60;

        cout << "tom sleeps well\n"
             << hours << "  hours and" << minutes << "minutes less for play ";
    }
}
