#include <iostream>
using namespace std;
int nFactorial(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int main()
{
    cout << "The factorial of 5 is: " << nFactorial(5) << endl;
    return 0;
}