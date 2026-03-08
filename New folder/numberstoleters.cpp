#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << " enter number between 0 to 100";
    cin >> num;
    // check if number is in valid range
    if (num < 0 || num > 100)
    {
        cout << "number out of  range!";
        return 0;
    }
    if (num == 0)
    {
        cout << "zero" << endl;
        return 0;
    }
    if (num == 100)
    {
        cout << "hundred" << endl;
        return 0;
    }
    if (num == 1)
    {
        cout << "one" << endl;
        return 0;
    }
    else if (num == 2)
    {
        cout << "Two" << endl;
    }
    else if (num == 3)
    {
        cout << "three" << endl;
    }
    else if (num == 4)
    {
        cout << " Four" << endl;
    }
    else if (num == 5)
    {
        cout << "five" << endl;
    }
    else if (num == 6)
    {
        cout << "six" << endl;
    }
    else if (num == 7)
    {
        cout << "Seven" << endl;
    }
    if
        else(num == 8)
        {
            cout << " eight" << endl;
        }
    else if (num == 10)
        cout << "ten";
    else if (num == 11)
        cout << " eleven";
    else if (num == 12)
        cout << "twelve";
    else if (num == 13)
        cout << " thirteen";
    else if (num == 14)
        cout << "Fourteen";
    else if (num == 15)
        cout << " fifteen";
    else if (num == 16)
        cout << " sixteen";
    else if (num == 17)
        cout << " seventeen";
    else if (num == 18)
        cout << " eighteen";
    else if (num == 19)
        cout << " ninteen";

    // handle numbers from twenty to 99
    else
    {
        int tens = num / 10; // get tens digit
        int ones = num % 10; // get nes digit

        // print tens part
        if (tens == 2)
            cout << "twenty";
        if (tens == 3)
            cout << "thirty";
        if (tens == 4)
            cout << "fourtty";
        if (tens == 5)
            cout << " fifty";
        if (tens == 6)
            cout << " sixty";
        if (tens == 7)
            cout << " seventy";
        if (tens == 8)
            cout << " eighty";
        if (num == 9)
            cout << " ninety";

        // print ones part

        if (one == 1)
            cout << " one";
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
    cout << endl;
    return 0;
}
