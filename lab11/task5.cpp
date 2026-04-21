#include <iostream>
using namespace std;

bool isIdentityMatrix(int matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            if (i == j)
            {
                if (matrix[i][j] != 1)
                {
                    return false;
                }
            }

            else
            {
                if (matrix[i][j] != 0)
                {
                    return false;
                }
            }
        }
    }
    return true;
}

void displayMatrix(int matrix[3][3])
{
    cout << "\nThe 3x3 Matrix is:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "| ";
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "|" << endl;
    }
}

int main()
{
    int matrix[3][3];

    cout << "Identity Matrix Checker" << endl;

    cout << "Enter 9 elements for the 3x3 matrix:" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter row " << i + 1 << " (3 integers): ";
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }

    displayMatrix(matrix);

    if (isIdentityMatrix(matrix))
    {
        cout << "\n✓ Result: The matrix is an IDENTITY MATRIX!" << endl;
        cout << "  (All diagonal elements are 1 and off-diagonal elements are 0)" << endl;
    }
    else
    {
        cout << "\n✗ Result: The matrix is NOT an identity matrix." << endl;
        cout << "  (Identity matrix requires 1s on main diagonal and 0s elsewhere)" << endl;
    }

    return 0;
}