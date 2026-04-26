#include <iostream>
using namespace std;

// function to print my name
void printName()
{
    cout << "MEERAB";
}
// function to check even or odd number
int checkEvenorOdd(int a);
// function for square of a number
int squareofnumber(int b);
// function to add three numbers
int sumofthreenumbers(int a, int b, int c);
// function to return largest of two numbers.
int largestoftwoNumbers(int a, int b);

int main()
{
    printName();
    int num;
    cout << "Enter the number you want to check is even or odd: ";
    cin >> num;
    if (checkEvenorOdd(num) == 0)
        cout << "The number is even " << checkEvenorOdd(num);
    else
        cout << "odd.";

    int num2;
    cout << "Enter the number whose square u want to find: ";
    cin >> num2;
    cout << "square of the number is: " << squareofnumber(num2) << endl;
    int n1, n2, n3;
    cout << "Enter three numbers for addition: ";
    cin >> n1 >> n2 >> n3;
    cout << "The sum is: " << sumofthreenumbers(n1, n2, n3) << endl;
    int number1, number2;
    cout << "Enter the two numbers u want to compare: " << endl;
    cin >> number1 >> number2;
    cout << "Largest is : " << largestoftwoNumbers(number1, number2);

    return 0;
}
int checkEvenorOdd(int a)
{
    if (a % 2 == 0)
    {

        return 0;
    }
    else
    {
        return 1;
    }
}
int squareofnumber(int b)
{
    int square = b * b;
    return square;
}
int sumofthreenumbers(int a, int b, int c)
{
    int d = a + b + c;
    return d;
}
int largestoftwoNumbers(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}