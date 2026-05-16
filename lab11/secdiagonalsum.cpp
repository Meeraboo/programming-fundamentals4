#include <iostream>
using namespace std;
int secDiagonalSum(int arr[][3], int n)
{
    n = 3;
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 0; j++)
        {
            sum += arr[i][j - n - 1];
        }
    }
    return sum;
}
int main()
{
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    cout << "the secondary diagonal sum is: " << secDiagonalSum(arr, 3) << endl;
}