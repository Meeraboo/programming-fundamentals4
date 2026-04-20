#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double convertFromMeters(double value, string unit)
{
    if (unit == "millimeters")
        return value * 1000;
    else if (unit == "centimeters")
        return value * 100;
    else if (unit == "meters")
        return value;
    else if (unit == "kilometers")
        return value / 1000;
    else
        return value;
}

string pyramidVolume(double l, double w, double h, string unit)
{
    // Convert dimensions to desired unit
    double L = convertFromMeters(l, unit);
    double W = convertFromMeters(w, unit);
    double H = convertFromMeters(h, unit);

    double volume = (L * W * H) / 3.0;

    string result = to_string(volume) + " cubic " + unit;
    return result;
}

int main()
{
    cout << fixed << setprecision(3);

    cout << pyramidVolume(4, 6, 20, "centimeters") << endl;
    cout << pyramidVolume(1843, 1823, 923, "kilometers") << endl;
    cout << pyramidVolume(18, 412, 93, "millimeters") << endl;

    return 0;
}