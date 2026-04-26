#include <iostream>
using namespace std;

void reverseArrayinGroups(int arr[], int n, int k)
{
    for (int i = 0; i < n; i += k)
    {
        int start = i;
        int end = i + k - 1;

        if (end >= n)
            end = n - 1;

        while (start < end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;

            start++;
            end--;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    reverseArrayinGroups(arr, n, k);

    cout << "Reversed array in groups of " << k << ": ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}