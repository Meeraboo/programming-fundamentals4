#include <iostream>
using namespace std;
int main()
{
    int n1 = 0;
    int next;
    int n2 = 1;
    cout << n1 << endl;
    cout << n2 << endl;
    int n;
    cout << "how many fibonacci numbers you want to print?" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int next = n1 + n2;
        cout << next << endl;
        n1 = n2;
        n2 = next;
    }
}