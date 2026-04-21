#include <iostream>
using namespace std;

int Primenumber(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;

    int result = Primenumber(number);
    if (result == 0)
    {
        cout << "Not Prime! ";
    }
    else
    {
        cout << "Prime number! ";
    }
    return 0;
}
