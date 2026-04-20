#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    float distance, angle;
    cout << "Enter the distance: ";
    cin >> distance;
    cout << "Enter the angle( in degrees): ";
    cin >> angle;
    float angleinrad = angle / 57;
    float height = distance * tan(angleinrad);
    cout << "The height of the tree is: " << height;
    return 0;
}
