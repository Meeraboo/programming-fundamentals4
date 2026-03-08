#include <iostream>
using namespace std;
int main()
{
    int speed;
    cout << "speeed of car: ";
    cin >> speed;
    if (speed <= 10)
    {
        cout << "slow";
    }
    else if (speed <= 50)
    {
        cout << " average speed";
    }
    else if (speed <= 150)
    {
        cout << "fast";
        return 0;
    }
    else if (speed <= 1000)
    {
        cout << "ultra fast";
        return 0;
    }
    else
    {
        cout << "extremly fast";
    }
    return 0;
}