#include <iostream>
using namespace std;
main()
{
    int numbers[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
        cout << "the " << i << " number you entered is : " << numbers[i] << endl;
    }
}