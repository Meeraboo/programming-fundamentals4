#include <iostream>
#include <string>
using namespace std;

// Function declaration/prototype
string checkAlphabetCase(char ch);

int main()
{
    char inputChar;

    cout << "Enter a character (A or a): ";
    cin >> inputChar;

    string result = checkAlphabetCase(inputChar);
    cout << result << endl;

    return 0;
}

// Function definition
string checkAlphabetCase(char ch)
{
    if (ch == 'A')
    {
        return "You have entered Capital A";
    }
    else if (ch == 'a')
    {
        return "You have entered small A";
    }
    else
    {
        return "Invalid input! Please enter either 'A' or 'a'";
    }
}