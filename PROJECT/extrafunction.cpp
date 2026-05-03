#include <iostream>
using namespace std;

int searchName(string name, int count, string customerNames[], )
{
    for (int i = 0; i < count; i++)
    {
        if (customerNames[i] == name)
        {
            cout << "Found: " << customerNames[i] << "-" << services[i] << "-" << status[i] << endl;
            return 1;
        }
    }
    return 0;
}
int main()
{
}