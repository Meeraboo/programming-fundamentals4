#include <iostream>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cout << "Enter your number: ";

    for (int i = n; i > 0; i / 10)
    {
        cin >> n;
        count = count + 1;
    }
    cout << " total nuber of digits are: " << count;
    return 0;
}