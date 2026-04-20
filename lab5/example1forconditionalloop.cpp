#include <iostream>
using namespace std;
int main()
{
    char ch = 'y';
    while (ch == 'y')
    {
        cout << "i m happy" << endl;
        cout << "Press y to continue or any key to exit \n";
        cin >> ch;
    }
}