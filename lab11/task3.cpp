#include <iostream>
#include <string>
using namespace std;

// Function A: Print only Toyota Blue cars
void printToyotaBlueCars(string cars[][3], int rows)
{
    cout << "\n=== Toyota Blue Cars ===" << endl;
    bool found = false;

    for (int i = 0; i < rows; i++)
    {
        if (cars[i][1] == "Toyota" && cars[i][2] == "Blue")
        {
            cout << "Car " << i + 1 << ": " << cars[i][0] << " - "
                 << cars[i][1] << " - " << cars[i][2] << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "No Toyota Blue cars found!" << endl;
    }
}

// Function B: Return total number of "Red" cars
int countRedCars(string cars[][3], int rows)
{
    int count = 0;
    for (int i = 0; i < rows; i++)
    {
        if (cars[i][2] == "Red")
        {
            count++;
        }
    }
    return count;
}

// Function C: Return total number of "Nissan" cars
int countNissanCars(string cars[][3], int rows)
{
    int count = 0;
    for (int i = 0; i < rows; i++)
    {
        if (cars[i][1] == "Nissan")
        {
            count++;
        }
    }
    return count;
}

// Function D: Return total number of cars of a given color
int converter(string cars[][3], int rows, string color)
{
    int count = 0;
    for (int i = 0; i < rows; i++)
    {
        if (cars[i][2] == color)
        {
            count++;
        }
    }
    return count;
}

// Function E: Print matrix with rows and columns swapped (transpose)
void printTranspose(string cars[][3], int rows, int cols)
{
    cout << "\n=== Transposed Matrix (Rows ↔ Columns) ===" << endl;

    // Since original is rows × 3, transpose will be 3 × rows
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << cars[j][i] << "\t";
        }
        cout << endl;
    }
}

// Function to display all cars (for reference)
void displayAllCars(string cars[][3], int rows)
{
    cout << "\n=== All Cars in Inventory ===" << endl;
    cout << "Model\t\tBrand\t\tColor" << endl;
    cout << "----------------------------------------" << endl;
    for (int i = 0; i < rows; i++)
    {
        cout << cars[i][0] << "\t\t" << cars[i][1] << "\t\t" << cars[i][2] << endl;
    }
}

int main()
{
    // Define a 2D array: rows = number of cars, columns = [Model, Brand, Color]
    const int ROWS = 6;
    const int COLS = 3;

    string cars[ROWS][COLS] = {
        {"Camry", "Toyota", "Blue"},
        {"Civic", "Honda", "Red"},
        {"Altima", "Nissan", "Black"},
        {"Corolla", "Toyota", "Red"},
        {"Sentra", "Nissan", "Blue"},
        {"Accord", "Honda", "Blue"}};

    // Display all cars
    displayAllCars(cars, ROWS);

    // A. Print Toyota Blue cars
    printToyotaBlueCars(cars, ROWS);

    // B. Count Red cars
    int redCount = countRedCars(cars, ROWS);
    cout << "\n=== Total Red Cars ===" << endl;
    cout << "Number of Red cars: " << redCount << endl;

    // C. Count Nissan cars
    int nissanCount = countNissanCars(cars, ROWS);
    cout << "\n=== Total Nissan Cars ===" << endl;
    cout << "Number of Nissan cars: " << nissanCount << endl;

    // D. Count cars by color using converter function
    cout << "\n=== Converter Function Results ===" << endl;
    string colorsToCheck[] = {"Red", "Blue", "Black", "White"};
    for (int i = 0; i < 4; i++)
    {
        int colorCount = converter(cars, ROWS, colorsToCheck[i]);
        cout << "Number of " << colorsToCheck[i] << " cars: " << colorCount << endl;
    }

    // E. Print transpose (rows to columns)
    printTranspose(cars, ROWS, COLS);

    return 0;
}
