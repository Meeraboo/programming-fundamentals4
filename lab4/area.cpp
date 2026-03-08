#include <iostream>
using namespace std;
int main()
{
    string shape;
    cout << " shape: ";
    cin >> shape;
    if (shape == "square")
    {
        int length;
        cin >> length;
        int area = length * length;
        cout << area;
    }
    else if (shape == "rectangle")
    {
        int length, width;
        cin >> length;
        cin >> width;
        int area = length * width;
        cout << area;
    }
    else if (shape == "circle")
    {
        int radius;
        cin >> radius;
        float area = 3.14 * (radius * radius);
        cout << area;
    }
    else if (shape == "triangle")
    {
        int base, height;
        cin >> base;
        cin >> height;
        float area = 0.5 * (base * height);
        cout << area;
    }
}