#include <iostream>
using namespace std;
int main()
{
    int reversed = 0;
    int digit, number;
    cout << "Enter the number: ";
    cin >> number;
    while (number > 0)
    {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number = number / 10;
    }
    cout << "reversed number is: " << reversed << endl;
}
