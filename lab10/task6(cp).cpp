#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    int result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int sumOfFactorialOfDigits(int num)
{
    int sum = 0;
    int temp = num;

    while (temp > 0)
    {
        int digit = temp % 10;   // Extract last digit
        sum += factorial(digit); // Add factorial of digit to sum
        temp /= 10;              // Remove last digit
    }

    return sum;
}

bool isStrong(int num)
{
    return (sumOfFactorialOfDigits(num) == num);
}

void displayResult(int num)
{
    if (isStrong(num))
    {
        cout << num << endl;
        cout << "Strong Number" << endl;
    }
    else
    {
        cout << num << endl;
        cout << "Not Strong Number" << endl;
    }
}

int main()
{
    int number;

    cin >> number;

    displayResult(number);

    return 0;
}