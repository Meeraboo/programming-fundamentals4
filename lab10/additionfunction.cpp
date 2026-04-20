#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int s = a + b;
    return s;
}
int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    cout << "The sum of 5 and 10 is: " << sum(5, 10) << endl;
    cout << "the minimum of two values is: " << min(5, 3) << endl;
    return 0;
}
