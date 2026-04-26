#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    int numbers[n];
    cout << "Enter the number of integers u want to enter: " << endl;
    // taking integers range
    while (true)
    {
        cin >> n;
        if (n > 0 && n < 1000)
        {
            break;
        }
        else
        {
            cout << "Please enter a positive integer between 1 and 1000: " << endl;
        }
    }
    // taking in numbers as an input with spaces
    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    // printing reverse arrays
    for (int i = n - 1; i >= 0; i--)
    {
        cout << numbers[i] << " ";
    }
    return 0;
}