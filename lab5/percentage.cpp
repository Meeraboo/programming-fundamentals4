#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count_p1 = 0, count_p2 = 0, count_p3 = 0, count_p4 = 0, count_p5 = 0;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        if (num < 200)
        {
            count_p1++;
        }
        else if (num >= 200 && num < 400)
        {
            count_p2++;
        }
        else if (num >= 400 && num < 600)
        {
            count_p3++;
        }
        else if (num >= 600 && num < 800)
        {
            count_p4++;
        }
        else
        { // num >= 800
            count_p5++;
        }
    }

    double p1 = (count_p1 * 100.0) / n;
    double p2 = (count_p2 * 100.0) / n;
    double p3 = (count_p3 * 100.0) / n;
    double p4 = (count_p4 * 100.0) / n;
    double p5 = (count_p5 * 100.0) / n;

    cout << fixed << setprecision(2);
    cout << p1 << "%" << endl;
    cout << p2 << "%" << endl;
    cout << p3 << "%" << endl;
    cout << p4 << "%" << endl;
    cout << p5 << "%" << endl;

    return 0;
}