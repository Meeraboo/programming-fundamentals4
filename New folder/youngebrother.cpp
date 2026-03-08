#include <iostream>
using namespace std;
int main()
{
    string name1, name2, name3;
    int age1, age2, age3;
    cout << "Enter first brother name: ";
    cin >> name1;
    cout << "Enter second brother name: ";
    cin >> name2;
    cout << "Enter third brother name: ";
    cin >> name3;
    cout << "Enter age of first brother: ";
    cin >> age1;
    cout << "Enter age of second brother: ";
    cin >> age2;
    cout << "nteer age of third brother: ";
    cin >> age3;
    if (age1 < age2)
    {
        if (age1 < age3)
            cout << " " << name1 << " is the younger brother:" << endl;
        return 0;
    }
    else if (age2 < age1)
    {
        if (age2 < age3)
            cout << " " << name2 << " is the younger brother: " << endl;
        return 0;
    }
    else if (age3 < age2)
    {
        if (age3 < age1)
            cout << "" << name3 << " is the younger brother: ";
        return 0;
    }
}