#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "enter the number of elements u want to enter: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "the largest is: " << largest << endl;
    return 0;
}