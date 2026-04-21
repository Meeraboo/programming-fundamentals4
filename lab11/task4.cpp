#include <iostream>
using namespace std;

// Function to print the sum of all elements in the matrix
void printSum(int matrix[][3], int rowSize)
{
    int totalSum = 0;

    // Calculate sum of all elements
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            totalSum += matrix[i][j];
        }
    }

    // Print the sum
    cout << "\n=== Sum of Matrix Elements ===" << endl;
    cout << "Total Sum: " << totalSum << endl;
}

// Function to display the matrix (for verification)
void displayMatrix(int matrix[][3], int rowSize)
{
    cout << "\n=== Your Matrix ===" << endl;
    for (int i = 0; i < rowSize; i++)
    {
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int rowSize;

    cout << "Enter the number of rows in the matrix: ";
    cin >> rowSize;

        if (rowSize <= 0)
    {
        cout << "Invalid row size! Please enter a positive number." << endl;
        return 1;
    }

    int matrix[rowSize][3];

    cout << "\nEnter the elements of the matrix (row by row):" << endl;
    for (int i = 0; i < rowSize; i++)
    {
        cout << "Row " << i + 1 << " (enter 3 integers): ";
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }

    displayMatrix(matrix, rowSize);

    printSum(matrix, rowSize);

    return 0;
}