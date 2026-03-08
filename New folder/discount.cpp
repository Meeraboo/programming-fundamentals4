#include <iostream>
using namespace std;
main()
{
    int bill;
    cout << "enter your bill";
    cin >> bill;
    int discount1 = bill * 0.05;
    int discount2 = bill * 0.1;

    if (bill <= 5000)
    {
        int totalbill = bill - discount1;
        cout << "total bill is " << totalbill << endl;
    }
    else if (bill > 5000)
    {
        int totalbill2 = bill - discount2;
        cout << "total bill is" << totalbill2;
    }
}