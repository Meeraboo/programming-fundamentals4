#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number between 0 to 100: ";
    cin >> num;

    // Check if number is in valid range
    if (num < 0 || num > 100)
    {
        cout << "Number out of range!" << endl;
        return 0;
    }

    // Handle special cases
    if (num == 0)
    {
        cout << "zero" << endl;
        return 0;
    }

    if (num == 100)
    {
        cout << "one hundred" << endl; // Fixed: added "one"
        return 0;
    }

    // Handle numbers 1-19
    if (num == 1)
        cout << "one";
    else if (num == 2)
        cout << "two";
    else if (num == 3)
        cout << "three";
    else if (num == 4)
        cout << "four";
    else if (num == 5)
        cout << "five";
    else if (num == 6)
        cout << "six";
    else if (num == 7)
        cout << "seven";
    else if (num == 8)
        cout << "eight";
    else if (num == 9)
        cout << "nine";
    else if (num == 10)
        cout << "ten";
    else if (num == 11)
        cout << "eleven";
    else if (num == 12)
        cout << "twelve";
    else if (num == 13)
        cout << "thirteen";
    else if (num == 14)
        cout << "fourteen";
    else if (num == 15)
        cout << "fifteen";
    else if (num == 16)
        cout << "sixteen";
    else if (num == 17)
        cout << "seventeen";
    else if (num == 18)
        cout << "eighteen";
    else if (num == 19)
        cout << "nineteen";

    // Handle numbers 20-99
    else
    {
        int tens = num / 10;
        int ones = num % 10;

        // Tens part
        if (tens == 2)
            cout << "twenty";
        else if (tens == 3)
            cout << "thirty";
        else if (tens == 4)
            cout << "forty";
        else if (tens == 5)
            cout << "fifty";
        else if (tens == 6)
            cout << "sixty";
        else if (tens == 7)
            cout << "seventy";
        else if (tens == 8)
            cout << "eighty";
        else if (tens == 9)
            cout << "ninety";

        // Ones part (if not zero)
        if (ones != 0)
        {
            cout << " ";
            if (ones == 1)
                cout << "one";
            else if (ones == 2)
                cout << "two";
            else if (ones == 3)
                cout << "three";
            else if (ones == 4)
                cout << "four";
            else if (ones == 5)
                cout << "five";
            else if (ones == 6)
                cout << "six";
            else if (ones == 7)
                cout << "seven";
            else if (ones == 8)
                cout << "eight";
            else if (ones == 9)
                cout << "nine";
        }
    }

    cout << endl;
    return 0;
}