#include <iostream>
using namespace std;

int EvenorOdd(int num)
{
    if (num / 2 == 0)
    {
        return 0; // even
    }
    else
    {
        return 1; // odd
    }
}
int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;

    int result = EvenorOdd(number);
    if (result == 0)
        cout << "The number is even";
    else
        cout << "the number is odd";
}
