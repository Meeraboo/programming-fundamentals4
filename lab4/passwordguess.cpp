#include <iostream>
using namespace std;
main()
{
    string my_password;
    string user_enter;
    cout << "enter your password: ";
    cin >> user_enter;
    my_password = "meerab$123";
    if (my_password == user_enter)
    {
        cout << "Wow!you have cracked the code";
    }
    else
    {
        cout << "its not that simple,try again";
    }
}
