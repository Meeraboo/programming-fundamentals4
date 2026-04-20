#include <iostream>
using namespace std;

main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int digit = 0;
    while (number > 0)
    {
        number = number / 10;
        digit++;
    }
    cout << "Number of digits: " << digit;
}