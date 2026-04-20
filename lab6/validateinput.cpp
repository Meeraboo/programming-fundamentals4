#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "rnter " << n << " numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        bool alreadyentered = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                alreadyentered = true;
                break;
            }
        }
        if (alreadyentered)
        {
            cout << " Already entered" << arr[i] << endl;
        }
    }
    cout << " unique numbers entered: ";
    for (int i = 0; i < n; i++)
    {
        bool isduplicate = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] = arr[i])
            {
                isduplicate = true;
                break;
            }
        }
        if (!isduplicate)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}