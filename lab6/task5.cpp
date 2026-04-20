#include <iostream>
using namespace std;
main()
{
    int numbers;
    int n[100]; // Assuming a maximum of 100 numbers
    cout << "How many numbers u want to enter: ";
    cin >> numbers;
    for (int i = 1; i <= numbers; i++)
    {
        cin >> n[i];
        }
    for (int i = 1; i <= numbers; i++)
    {
        cout << " number  is: " << n[i] << endl;
    }
}
