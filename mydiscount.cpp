#include <iostream>
using namespace std;
main()
{
    float amount;
    cout << "total amount";
    cin >> amount;
    float total_amount;
    if (amount <= 5000)
    {
        total_amount = amount * (5 / 100);
        cout << "ur amount is" << total_amount;
    }
    else if (amount > 5000)
    {

        total_amount = amount * (10 / 100);
        cout << "ur total amount is" << total_amount;
    }
}