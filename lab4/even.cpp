#include <iostream>
using namespace std;
main()
{

    int number, even;
    cout << " enter your number:";
    cin >> number;
    even = number % 2;
    if (even == 0)
    {
        cout << "the number is even";
    }
    else
    {
        cout << "the number is odd";
    }
}