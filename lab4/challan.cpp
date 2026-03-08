#include <iostream>
using namespace std;
int main()
{
    int car_speed;
    cout << "car ki speed: ";
    cin >> car_speed;
    if (car_speed > 100)
    {
        cout << "halt...You will be challaned!";
    }
    else
    {
        cout << "Perfect!you are going good.";
    }
}
