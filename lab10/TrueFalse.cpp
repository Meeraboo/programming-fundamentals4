#include <iostream>
using namespace std;

// Function declaration
bool isSymmetrical(int number);

int main()
{
    int num;

    cout << "Enter a 3-digit number: ";
    cin >> num;

    // Validate if the number is 3-digit
    if (num < 100 || num > 999)
    {
        cout << "Error! Please enter a 3-digit number (100-999)." << endl;
        return 1;
    }

    bool result = isSymmetrical(num);

    if (result)
    {
        cout << num << " is symmetrical (palindrome)." << endl;
    }
    else
    {
        cout << num << " is not symmetrical." << endl;
    }

    return 0;
}

// Function definition
bool isSymmetrical(int number)
{
    // Extract digits
    int firstDigit = number / 100; // Hundreds place
    int lastDigit = number % 10;   // Ones place

    // For a 3-digit number, it's symmetrical if first and last digits are equal
    // (middle digit can be anything)
    return (firstDigit == lastDigit);
}