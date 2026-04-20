#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << num1 << " raised to the power " << num2 << " " << pow(num1, num2);
    return 0;
}