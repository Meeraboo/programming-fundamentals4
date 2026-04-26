#include <iostream>
using namespace std;
void rotatearrayRightby1(int n, int arr[]);
int main()
{
    int n;
    cout << "enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter numbers of Arrays: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rotatearrayRightby1(n, arr);
    cout << "The array rotated to right  by 1: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
void rotatearrayRightby1(int n, int arr[])
{
    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}
