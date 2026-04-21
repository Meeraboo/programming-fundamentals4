#include <iostream>
using namespace std;

int SumofFirstNaturalnumbers(int num)
{
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        count += i;
    }
    return count;
}
int main()
{

    int result = SumofFirstNaturalnumbers(5);
    cout << "The sum of first 5 natural numbers is: " << result;
}