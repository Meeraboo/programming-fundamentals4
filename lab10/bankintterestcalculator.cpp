
#include <iostream>
using namespace std;

float calculateBalance(float balance, int years)
{
    float interestRate;

    if (balance < 10000)
    {
        interestRate = 5.0;
    }
    else if (balance >= 10000 && balance <= 50000)
    {
        interestRate = 7.0;
    }
    else
    {
        interestRate = 10.0;
    }

    if (years >= 3)
    {
        interestRate += 2.0;
    }

    float interestAmount = balance * (interestRate / 100.0);
    float updatedBalance = balance + interestAmount;

    return updatedBalance;
}

int main()
{
    float balance;
    int years;

    cout << "Enter Balance and years: " << endl;
    cin >> balance >> years;

    float result = calculateBalance(balance, years);
    cout << "Updated Balance: " << result << endl;

    return 0;
}