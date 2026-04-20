#include <iostream>
using namespace std;
int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
    numbers[4] = 5;
    cout << "The first number is at index 0: " << numbers[0] << endl;
    cout << "The second number is at index 1: " << numbers[1] << endl;
    cout << "The third number is at index 2: " << numbers[2] << endl;
    cout << "The fourth number is at index 3: " << numbers[3] << endl;
    cout << "The fifth number is at index 4: " << numbers[4] << endl;
    return 0;
}