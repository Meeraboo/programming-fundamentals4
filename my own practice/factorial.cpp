#include <iostream>
using namespace std;
main()
{
    int n, m;
    cout << " enter";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        m = n * i;
    }
    cout << "factorial is " << m;
}