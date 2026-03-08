#include <iostream>
using namespace std;
int main()
{
    string country;
    cout << "Enter the country name: ";
    cin >> country;
    int ticket_price;
    cout << "Enter yor ticket price: ";
    cin >> ticket_price;
    float disc_for_ireland = ticket_price * 0.1;
    float discount = ticket_price * 0.05;
    if (country == "Ireland" || country == " ireland" || country == "ireland" || country == " Ireland")
    {
        cout << "Your discounted price is" << ticket_price - disc_for_ireland << endl;
        return 0;
    }
    else
    {
        cout << "Your discounted price is : " << ticket_price - discount;
        return 0;
    }
}