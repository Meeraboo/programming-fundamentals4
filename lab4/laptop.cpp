#include <iostream>
using namespace std;
main()
{
    int salary = 10000;
    int advance_salary = salary * (50 / 100);
    int total_money = (advance_salary * 6);
    if (total_money >= 50000)
    {
        cout << "you can buy a laptop";
    }
    if (total_money < 50000)
    {
        cout << " 5 MONTHS total salary will be required to buy a laptop";
    }
}