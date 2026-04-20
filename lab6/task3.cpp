#include <iostream>
using namespace std;
main()
{
    int numbers[4];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number " << i + 1 << " : ";
        cin >> numbers[i];
    }
    cout << "the number on first index is: " << numbers[0] << endl;
    cout << "the number on the last index is: " << numbers[4] << endl;
    return 0;
}