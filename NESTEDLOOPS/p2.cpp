#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 2; j <= n + 2; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
