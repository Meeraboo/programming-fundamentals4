#include <iostream>
using namespace std;
int main()
{
    int y = 20;
    int &ref = y;
    cout << "Value of y: " << y << endl;
    ref = 30; // Modifying y through reference
    cout << "Value of y after modification: " << y << endl;
    return 0;
}