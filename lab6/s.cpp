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
    cout << "sum: " << sum << endl;
    cout << " avg: " << avg << endl;
}