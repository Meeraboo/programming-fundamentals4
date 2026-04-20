#include <iostream>
using namespace std;
int main()
{
    int n1, n2, no;
    cout << "Enter your number : ";
    cin >> n1;
    cout << " Enter digit whose frequency is to be checked: ";
    cin >> no;
    int count = 0;
    while (n1 > 0)

    {
        int n2 = n1 % 10;

        if (n2 == no)
        {
            count = count + 1;
        }
        n1 = n1 / 10;
    }

    cout << "the frequencyof " << no << "is " << count;
}