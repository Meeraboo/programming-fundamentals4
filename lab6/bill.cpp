#include <iostream>
#include <iomanip>
using namespace std;
bool canPay(int coins[], double totalDue)
{
    double quarterValue = 0.25;
    double dimeValue = 0.10;
    double nickelValue = 0.05;
    double pennyValue = 0.01;

    double totalMoney = (coins[0] * quarterValue) + (coins[1] * dimeValue) + (coins[2] * nickelValue) + (coins[3] * pennyValue);

    return totalMoney >= totalDue - 0.001;
}
main()
{

    int coins[4];
    double totaldue;

    cout << "enter quarters: ";
    cin >> coins[0];

    cout << " enter dimes: ";
    cin >> coins[1];

    cout << " enter nickels: ";
    cin >> coins[2];

    cout << " enter pennies: ";
    cin >> coins[3];

    cout << " enter the total amount due: ";
    cin >> totaldue;

    if (canPay(coins, totaldue))
    {
        cout << "can you pay the amount?yes" << endl;
    }
    else
    {
        cout << "can you pay ?no" << endl;
    }
    return 0;
}