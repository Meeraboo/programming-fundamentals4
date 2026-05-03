#include <iostream>
using namespace std;

void modifyWithPointer(int *ptr)
{
    *ptr = 50; // Modifying the value at the address pointed to by ptr
}
void modifyWithReference(int &ref)
{
    ref = 100; // Modifying the value referred to by ref
}
int main()
{
    int a = 10, b = 20;

    modifyWithPointer(&a);                                  // Passing the address of a
    modifyWithReference(b);                                 // Passing b by reference
    cout << "Value of a after modification: " << a << endl; // Should print 50
    cout << "Value of b after modification: " << b << endl; // Should print 100
    return 0;
}