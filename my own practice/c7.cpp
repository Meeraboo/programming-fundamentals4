#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    while (n % 2 == 0)
    {
        cout << " not prime: " << endl;
        break;
    }
    cout << " prime: " << endl;
}