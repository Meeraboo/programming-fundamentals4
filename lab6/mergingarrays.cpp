#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements for the first array: ";
    cin >> n;

    cout << "enter 2 elements for first array: ";
    int arr1[2];
    int size1 = 2;
    for (int i = 0; i < 2; i++)
    {
        cin >> arr1[i];
    }
    int n2;
    cout << "Enter the number of elements for the second array: ";
    cin >> n2;
    cout << "enter " << n2 << " elements for second array: ";
    int arr2[n2];
    int size2 = n2;
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    int position = 1;
    for (int i = size1 - 1; i >= position; i--)
    {
        arr1[i + size2] = arr1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        arr1[position + i] = arr2[i];
    }
    size1 = size1 + size2;
    cout << "The merged array is: ";
    for (int i = 0; i < size1; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    return 0;
}
