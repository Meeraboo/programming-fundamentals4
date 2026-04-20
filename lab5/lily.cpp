#include <iostream>
using namespace std;

int main()
{
    int age, washingMachinePrice, toyPrice;

    cin >> age;
    cin >> washingMachinePrice;
    cin >> toyPrice;

    int moneyFromBirthdays = 0;
    int toysCount = 0;
    int evenYearMoney = 10;

    for (int year = 1; year <= age; year++)
    {
        if (year % 2 == 0)
        {
            moneyFromBirthdays += evenYearMoney;
            moneyFromBirthdays -= 1;
            evenYearMoney += 10;
        }
        else
        {
            toysCount++;
        }
    }

    int totalSavings = moneyFromBirthdays + (toysCount * toyPrice);

    if (totalSavings >= washingMachinePrice)
    {
        int remaining = totalSavings - washingMachinePrice;
        cout << "Yes! " << remaining << endl;
    }
    else
    {
        int needed = washingMachinePrice - totalSavings;
        cout << "No! " << needed << endl;
    }

    return 0;
}
