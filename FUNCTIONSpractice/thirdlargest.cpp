#include <iostream>
using namespace std;

int thirdLargest(int arr[], int size)
{
    int first = arr[0];
    int second = -1;
    int third = -1;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] < first && arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third && arr[i] < second)
        {
            third = arr[i];
        }
    }
    return third;
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
    cout << "The third largest is : " << thirdLargest(arr, size);
    return 0;
}