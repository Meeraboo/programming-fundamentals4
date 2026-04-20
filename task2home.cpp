#include <iostream>
using namespace std;
main()
{
    int n;
    int sum = 0;
    while (n >= 0)
    {
        cout << "Enter number: ";
        cin >> n;
        sum = sum + n;
    }
    cout << "Sum is: " << sum;
}