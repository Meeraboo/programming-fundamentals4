#include <iostream>
using namespace std;

int largerNumber(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
int main()
{
    int number1, number2;
    cout << "Enter the numbers: ";
    cin >> number1;
    cin >> number2;
    int result = largerNumber(number1, number2);
    cout << "The larger number is: " << result;
    return 0;
}
