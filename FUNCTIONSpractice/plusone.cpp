#include <iostream>
using namespace std;

void plusOne(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] < 9)
        {
            arr[i]++;

            // print result
            for (int j = 0; j < n; j++)
                cout << arr[j] << " ";
            return;
        }

        arr[i] = 0;
    }

    // If all were 9
    cout << 1 << " ";
    for (int i = 0; i < n; i++)
        cout << 0 << " ";
}

int main()
{
    int arr[] = {1, 2, 9};
    int n = 3;

    plusOne(arr, n);
}
