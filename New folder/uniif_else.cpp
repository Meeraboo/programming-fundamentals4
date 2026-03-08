#include <iostream>
using namespace std;
main()
{
    cout << "if they are going to uni , then enter y " << endl;
    char going;
    cout << "are your friends gong to the university";
    cin >> going;

    if (going == 'y')
    {
        cout << "you  can go to the university";
    }
    else
    {
        cout << "you should not go to the university";
    }
}