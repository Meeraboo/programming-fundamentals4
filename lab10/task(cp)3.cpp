#include <iostream>
using namespace std;

// calculate final price
float taxCalculator(char type, float price)
{
    float taxRate;

    // Determine tax rate based on vehicle type
    if (type == 'M' || type == 'm')
        taxRate = 6;
    else if (type == 'E' || type == 'e')
        taxRate = 8;
    else if (type == 'S' || type == 's')
        taxRate = 10;
    else if (type == 'V' || type == 'v')
        taxRate = 12;
    else if (type == 'T' || type == 't')
        taxRate = 15;
    else
    {
        cout << "Invalid vehicle type!" << endl;
        return -1;
    }

    float taxAmount = price * (taxRate / 100);
    float finalPrice = price + taxAmount;

    return finalPrice;
}

int main()
{
    char type;
    float price;

    cout << "Enter vehicle type code (M/E/S/V/T): ";
    cin >> type;

    cout << "Enter vehicle price: ";
    cin >> price;

    float result = taxCalculator(type, price);

    if (result != -1)
    {
        string vehicleName;

        if (type == 'M' || type == 'm')
            vehicleName = "Motorcycle";
        else if (type == 'E' || type == 'e')
            vehicleName = "Electric";
        else if (type == 'S' || type == 's')
            vehicleName = "Sedan";
        else if (type == 'V' || type == 'v')
            vehicleName = "Van";
        else if (type == 'T' || type == 't')
            vehicleName = "Truck";

        cout << "The final price on a vehicle of type "
             << vehicleName
             << " after adding the tax is $"
             << result << "." << endl;
    }

    return 0;
}