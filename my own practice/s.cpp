#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of elements you want to enter: ";
    cin >> n;
    int arr[n];
    cout << "enter the elements: ";
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
    cout << "largest is: " << largest << endl;
    return 0;
}