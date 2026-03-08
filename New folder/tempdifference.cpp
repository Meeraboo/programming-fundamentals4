#include <iostream>
using namespace std;
int main()
{
    float temp1, temp2;
    cout << "Enter th temperature of first city: ";
    cin >> temp1;
    cout << "Enter the temperature of second city: " << endl;
    cin >> temp2;
    float diff = temp2 - temp1;
    if (diff > 10)
    {
        cout << "Difference too big\n Program ends here.";
    }
}