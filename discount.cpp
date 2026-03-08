#include <iostream>
using namespace std;
main()
{
    float amount;
    cout << "total amount";
    cin >> amount;
    if (amount <= 5000)
    {
        float total_amount = amount * (5 / 100);
        cout << "ur amount is" << total_amount;
    }
    if (amount > 5000)
    {

        float tol_amount = amount * (10 / 100);
        cout << "ur total amount is" << tol_amount;
    }
}