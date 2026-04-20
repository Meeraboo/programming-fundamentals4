#include <iostream>
using namespace std;
int main()
{
    int table = 24;
    for (int i = 1; i <= 10; i++)
    {
        int result = i * table;
        cout << table << " * " << i << " = " << result << endl;
    }
}