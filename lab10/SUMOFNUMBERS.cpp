#include <iostream>
using namespace std;
int sumOfNnumbers(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    cout << " the sum of numbers is: " << sumOfNnumbers(10) << endl;
    return 0;
}