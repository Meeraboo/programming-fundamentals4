#include <iostream>
using namespace std;

main()
{
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum = sum + i;
    }
    cout << "The sum of first 10 natural numbers is : " << sum << endl;
}