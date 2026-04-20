#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    float root1;
    float root2;
    int a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    float multiple = 4 * a * c;
    float determinant = (pow(b, 2)) - multiple;
    float b2 = pow(b, 2);
    float a2 = a * 2;
    float me = -b / a2;
    if (determinant > 0)
    {
        root1 = (-b + sqrt(determinant)) / a2;
        cout << root1;
        root2 = (-b - sqrt(determinant)) / a2;
        cout << root2;
    }
    else if (determinant == 0)
    {
        root1 = me;
        cout << root1;
        cout << "Root = " << root1 << " (double root)" << endl;
    }
    else
    {
        float realPart = me;
        float imaginaryPart = sqrt(-determinant) / a2; // Fixed calculation
        cout << "Root1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}