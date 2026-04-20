#include <iostream>
using namespace std;
int main()
{
    int firstno = 0;
    int secondno = 1, next;
    int n;
    cout << "how many cycles of fibinaci numbers u want";
    cin >> n;
    cout << firstno << " ,";
    cout << secondno << " ,";
    for (int i = 0; i < n - 1; i = i + 1)
    {
        next = firstno + secondno;
        cout << next << endl;
        firstno = secondno;
        secondno = next;
    }
}