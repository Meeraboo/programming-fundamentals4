#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "number of resistors u want to enter : ";
    cin >> n;
    float sum = 0;
    float arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << " sum of resistances:  " << sum;
    return 0;
}
