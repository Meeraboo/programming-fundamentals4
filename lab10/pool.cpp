#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

string calculatePoolState(double V, double P1, double P2, double H);

int main()
{
    double V, P1, P2, H;

    cout << "=== Pool Filling Calculator ===" << endl;
    cout << "Enter pool volume (liters): ";
    cin >> V;

    cout << "Enter flow rate of pipe 1 (liters/hour): ";
    cin >> P1;

    cout << "Enter flow rate of pipe 2 (liters/hour): ";
    cin >> P2;

    cout << "Enter number of hours: ";
    cin >> H;

    if (V <= 0 || P1 < 0 || P2 < 0 || H <= 0)
    {
        cout << "Error! Invalid input values." << endl;
        return 1;
    }

    string result = calculatePoolState(V, P1, P2, H);
    cout << "\n"
         << result << endl;

    return 0;
}

string calculatePoolState(double V, double P1, double P2, double H)
{
    double totalWater = (P1 + P2) * H;
    double overflow = totalWater - V;

    string result = "";

    if (totalWater < V)
    {

        double remaining = V - totalWater;
        double percentage = (totalWater / V) * 100;

        result = "The pool is not full yet. ";
        result += to_string((int)totalWater) + " liters filled, ";
        result += to_string((int)remaining) + " liters remaining. ";
        result += "(" + to_string((int)percentage) + "% full)";
    }
    else if (totalWater == V)
    {

        result = "The pool is exactly full! " + to_string((int)totalWater) + " liters filled.";
    }
    else
    {

        double percentage = (totalWater / V) * 100;

        result = "The pool is overflowing! ";
        result += to_string((int)totalWater) + " liters filled, ";
        result += to_string((int)overflow) + " liters have overflowed. ";
        result += "(" + to_string((int)percentage) + "% of pool volume)";
    }

    return result;
}