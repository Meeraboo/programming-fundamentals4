#include <iostream>
using namespace std;
int main()
{
    int roses, whites, tulips;
    cout << "red rose : ";
    cin >> roses;
    cout << " white roses: ";
    cin >> whites;
    cout << "tulips: ";
    cin >> tulips;
    float red_price, white_price, tulip_price;
    red_price = 2;
    white_price = 4.01;
    tulip_price = 2.50;
    float total_price = (roses * red_price) + (whites * 4.01) + (tulips * tulip_price);
    cout << "Total price is : " << total_price << endl;
    float discount = total_price * 0.2;
    if (total_price > 200)
    {
        cout << "your discounted price is: " << total_price - discount;
    }
}