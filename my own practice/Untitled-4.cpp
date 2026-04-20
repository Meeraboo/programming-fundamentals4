#include <iostream>
using namespace std;
main()
{
    int numbers[5];
    int count = 0;
    int sum, avg;
    for (int i = 0; i < 5; i++)
    {
        count = count + i;
        avg = count / 5;
    }
    cout << "sum is : " << count << endl;
    cout << "average is: " << avg;
}