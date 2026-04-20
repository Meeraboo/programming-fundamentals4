#include <iostream>
#include <string>
using namespace std;

string numberToText(int number)
{

    string units[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
                      "sixteen", "seventeen", "eighteen", "nineteen"};
    string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    if (number >= 1 && number <= 9)
    {
        return units[number];
    }

    if (number >= 10 && number <= 19)
    {
        return teens[number - 10];
    }

    // Handle 20-99
    if (number >= 20 && number <= 99)
    {
        int tensPlace = number / 10;
        int unitsPlace = number % 10;

        if (unitsPlace == 0)
        {
            return tens[tensPlace];
        }
        else
        {
            return tens[tensPlace] + "-" + units[unitsPlace];
        }
    }

    return "Invalid number";
}

int main()
{

    cout << "Number to Text Converter (1-99)" << endl;
    cout << "================================" << endl;

    int testNumbers[] = {1, 7, 10, 13, 19, 20, 21, 30, 35, 42, 50, 57, 66, 73, 84, 90, 99};

    for (int i = 0; i < 17; i++)
    {
        int num = testNumbers[i];
        cout << num << " -> \"" << numberToText(num) << "\"" << endl;
    }

    int userNum;
    cout << "\nEnter your own number (1-99): ";
    cin >> userNum;

    if (userNum >= 1 && userNum <= 99)
    {
        cout << userNum << " in words: " << numberToText(userNum) << endl;
    }
    else
    {
        cout << "Invalid input! Number must be between 1 and 99." << endl;
    }

    return 0;
}