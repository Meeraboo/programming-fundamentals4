#include <iostream>
using namespace std;
int diagonalSum(int arr[3][3], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][n - 1 - i];
    }
    if (n % 2 != 0)
    {
        sum -= arr[n / 2][n / 2];
    }
    return sum;
}
int main()
{
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    int n = 3;
    cout << "Diagonal Sum: " << diagonalSum(arr, n) << endl;
    return 0;
}