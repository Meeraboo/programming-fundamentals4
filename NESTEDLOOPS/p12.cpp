#include <iostream>
using namespace std;

int main()
{
    int n = 8;
    for (int i = 0; i <= 4; i + 2)
    {
        for (int j = 2; j < n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}