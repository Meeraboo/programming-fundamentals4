#include <iostream>
using namespace std;

int numberofDigits(int num)
{
    int count = 0;
    while (num > 0)
    {
        num = num / 10;
        count++;
    }
    return count;
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Number of digits in " << num << " is: " << numberofDigits(num) << endl;
    return 0;
}