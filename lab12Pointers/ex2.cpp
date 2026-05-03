#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // pointer to the first element of the array
    for (int i = 0; i < 5; i++)
    {
        cout << "Element " << i << " is: " << *(ptr + i) << endl;
    }
    return 0;
}