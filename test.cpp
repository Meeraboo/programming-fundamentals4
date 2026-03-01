#include <iostream>
using namespace std;
main()
{
    cout << "enter distance in kilometers:";
    int distance;
    cin >> distance;
    cout << " enter time in hours:";
    int time;
    cin >> time;
    int speed;
    speed = distance / time;
    cout << "speed is " << speed << "km/h";
}
