#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a positive number: ";
    cin >> number;
    while (number < 0)
    {
        cout << "ERROR..Enter a positive number kuttey!" << endl;
        cout << "please enter a positive value: ";
        cin >> number;
    }
}