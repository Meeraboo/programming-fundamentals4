#include <iostream>
using namespace std;
main()
{
    int a;
    int b;
    cout << "enter your integr:";
    cin >> a;
    cout << "enter your 2nd integer:";
    cin >> b;
    if (a > b)
    {
        cout << "number" << a << " is greater than " << b;
    }
    else
    {
        cout << "Number" << b << "is greater than " << a;
    }
}