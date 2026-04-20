#include <iostream>
using namespace std;

main()
{
    int num1, num2, hcf;
    cout << "enter two numbers whose hcf is yo be found: ";
    cin >> num1;
    cin >> num2;
    for (int i = 1; i <= num1 && num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }
    cout << "hcf of numbers is: "
         << hcf << endl;
    int lcm;
    lcm = (num1 * num2) / hcf;
    cout << "lcm of numbers is: " << lcm;
}