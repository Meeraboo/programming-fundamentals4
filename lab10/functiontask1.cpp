#include <iostream>
using namespace std;
void add(int number1, int number2);

int main()
{
    int number1, number2;
    cout << "Enter two numbers : ";
    cin >> number1 >> number2;
    add(number1, number2);
    return 0;
}
void add(int number1, int number2)
{
    int sum;
    sum = number1 + number2;
    cout << "The sum of " << number1 << " and " << number2 << " is : " << sum;
}