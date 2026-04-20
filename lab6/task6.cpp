#include <iostream>
using namespace std;
main()
{
    int sum = 0;
    int avg = 0;
    int n[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        sum += n[i];
    }
    avg = sum / 5;
    cout << "The sum is: " << sum << endl;
    cout << "The average is: " << avg << endl;
    return 0;
}