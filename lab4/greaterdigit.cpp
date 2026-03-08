#include <iostream>
using namespace std;
main()
{
    int int1;
    cout << "ener first digit";
    cin >> int1;
    int int2;
    cout << "enter 2nd digit ";
    cin >> int2;
    if (int1 > int2)
    {

        cout << " " << int1 << " is greater than " << int2;
    }
    else if (int2 > int1)
    {
        cout << " " << int2 << " is greateer " << endl;
    }
}