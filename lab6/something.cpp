#include <iostream>
using namespace std;
main()
{
    string sthg = " something";
    string arg;
    cout << "enter statement: ";
    getline(cin, arg);
    string statement = (sthg + arg);
    cout << statement;
    return 0;
}