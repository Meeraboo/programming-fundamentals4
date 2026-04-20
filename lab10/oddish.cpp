#include <iostream>
#include <string>
using namespace std;

// Function declaration
string checkOddishEvenish(int number);

int main()
{
    int num;

    cout << "Enter a 5-digit number: ";
    cin >> num;

    // Validate if the number is 5-digit
    if (num < 10000 || num > 99999)
    {
        cout << "Error! Please enter a 5-digit number (10000-99999)." << endl;
        return 1;
    }

    string result = checkOddishEvenish(num);
    cout << result << endl;

    return 0;
}

// Function definition
string checkOddishEvenish(int number)
{
    int sum = 0;
    int temp = number;

    // Calculate sum of digits
    sum += temp / 10000; // Ten-thousands place (digit 1)
    temp %= 10000;
    sum += temp / 1000; // Thousands place (digit 2)
    temp %= 1000;
    sum += temp / 100; // Hundreds place (digit 3)
    temp %= 100;
    sum += temp / 10; // Tens place (digit 4)
    temp %= 10;
    sum += temp; // Ones place (digit 5)

    // Check if sum is odd or even
    if (sum % 2 == 1)
    {
        return "Oddish";
    }
    else
    {
        return "Evenish";
    }
}