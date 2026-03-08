#include <iostream>
using namespace std;
main()
{
    int price;
    cout << "what is the price od dress: ";
    cin >> price;
    {
        if (price < 1500)
        {
            cout << "i can buy dress";
        }
        else
        {
            cout << "i cant buy th dress" << endl;
        }
    }
}