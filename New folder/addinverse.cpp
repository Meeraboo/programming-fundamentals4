#include <iostream>
using namespace std;
main()
{
    int num1, num2;
    char opt;
    cout << "enter number 1";
    cin >> num1;
    cout << "enter operator";
    cin >> opt;
    cout << "enter number 2";
    cin >> num2;
    if (opt == '+')
    {
        cout << "answer: " << num1 - num2 << endl;
        return 0;
    }

    else if (opt == '-')
    {
        cout << "answer: " << num1 + num2 << endl;
        return 0;
    }
    else if (opt == '/')
    {
        cout << " answer: " << num1 * num2 << endl;
        return 0;
    }
    else if (opt == '*')
    {
        cout << " answer: " << num1 / num2;
        return 0;
    }
}