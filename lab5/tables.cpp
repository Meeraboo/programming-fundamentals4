#include <iostream>
using namespace std;
int main()
{
    int table;
    cout << "whose table u want to write: ";
    cin >> table;
    for (int i = 1; i <= 10; i++)
    {
        int result = i * table;
        cout << table << " * " << i << " = " << result << endl;
        }
}