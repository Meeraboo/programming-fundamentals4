#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "enter the number of elements u want yo enter: ";
    cin >> n;
    int array[n]; // Declare array with size n
    cout << "Enter the numbers : ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Reversed array: ";
    reverseArray(array, n);
    return 0;
}
