#include <iostream>
using namespace std;

int secondLargest(int arr[], int size)
{
    int largest = arr[0];
    int secondlargest = -1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondlargest)
        {
            secondlargest = arr[i];
        }
    }
    return secondlargest;
}

int main()
{
    int size;
    cout << "Enter the number of number u want to enter: ";
    cin >> size;
    int arr[size];
    cout << "Enter the numbers: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The second largest is: " << secondLargest(arr, size);
}