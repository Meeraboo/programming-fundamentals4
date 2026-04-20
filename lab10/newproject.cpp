#include <iostream>
using namespace std;

int main()
{

    string customerNames[100];
    string services[100];
    string status[100];

    int count = 0;
    int role;
    while (true)
    {

        cout << "Select Role:\n";
        cout << "1. Admin\n";
        cout << "2. User\n";
        cin >> role;

        if (role == 1)
        {

            int choice;

            do
            {
                cout << "\n--- ADMIN MENU ---\n";
                cout << "1. View Customers\n";
                cout << "2. Total Customers\n";
                cout << "3. Clear All Data\n";
                cout << "4. search customer\n";
                cout << "5. View waiting customers\n";
                cout << "6. View completed customers\n";
                cout << "7. Sort customers by name\n";
                cout << "8. Sort Customers by Status\n";
                cout << "9. Show First Customer\n";
                cout << "10. Exit\n";

                cin >> choice;

                //  View Customers
                if (choice == 1)
                {
                    for (int i = 0; i < count; i++)
                    {
                        cout << i << ". " << customerNames[i]
                             << " - " << services[i]
                             << " - " << status[i] << endl;
                    }
                }

                // total customers
                else if (choice == 2)
                {
                    cout << "Total Customers: " << count << endl;
                }

                //  clear all Data
                else if (choice == 3)
                {
                    count = 0;
                    cout << "All data cleared!\n";
                }

                //  Search customer
                else if (choice == 4)
                {
                    string name;
                    cout << "Enter name: ";
                    cin >> name;

                    for (int i = 0; i < count; i++)
                    {
                        if (customerNames[i] == name)
                        {
                            cout << "Found: "
                                 << customerNames[i] << " - "
                                 << services[i] << " - "
                                 << status[i] << endl;
                        }
                    }
                }

                //  waiting customers
                else if (choice == 5)
                {
                    for (int i = 0; i < count; i++)
                    {
                        if (status[i] == "waiting")
                        {
                            cout << customerNames[i] << endl;
                        }
                    }
                }

                // completed customers
                else if (choice == 6)
                {
                    for (int i = 0; i < count; i++)
                    {
                        if (status[i] == "done")
                        {
                            cout << customerNames[i] << endl;
                        }
                    }
                }

                // sort by name
                else if (choice == 7)
                {
                    for (int i = 0; i < count - 1; i++)
                    {
                        for (int j = 0; j < count - i - 1; j++)
                        {

                            if (customerNames[j] > customerNames[j + 1])
                            {

                                // swap all arrays
                                swap(customerNames[j], customerNames[j + 1]);
                                swap(services[j], services[j + 1]);
                                swap(status[j], status[j + 1]);
                            }
                        }
                    }
                    cout << "Sorted by name!\n";
                }

                // sort by status
                else if (choice == 8)
                {
                    for (int i = 0; i < count - 1; i++)
                    {
                        for (int j = 0; j < count - i - 1; j++)
                        {

                            if (status[j] > status[j + 1])
                            {

                                swap(customerNames[j], customerNames[j + 1]);
                                swap(services[j], services[j + 1]);
                                swap(status[j], status[j + 1]);
                            }
                        }
                    }
                    cout << "Sorted by status!\n";
                }

                // show first customer
                else if (choice == 9)
                {
                    if (count > 0)
                    {
                        cout << customerNames[0] << endl;
                    }
                    else
                    {
                        cout << "No customers!\n";
                    }
                }

            } while (choice != 10);
        }

        // user role
        else if (role == 2)
        {

            int choice;

            do
            {
                cout << "\n--- USER MENU ---\n";
                cout << "1. Add Customer\n";
                cout << "2. View Customers\n";
                cout << "3. Search Customer\n";
                cout << "4. Update Customer\n";
                cout << "5. Delete Customer\n";
                cout << "6. Sort Customers\n";
                cout << "7. Exit\n";

                cin >> choice;

                // Add
                if (choice == 1)
                {
                    cout << "Enter name: ";
                    cin >> customerNames[count];

                    cout << "Enter service: ";
                    cin >> services[count];

                    status[count] = "waiting";

                    count++;
                    cout << "Added!\n";
                }

                // View
                else if (choice == 2)
                {
                    for (int i = 0; i < count; i++)
                    {
                        cout << i << ". "
                             << customerNames[i] << " - "
                             << services[i] << " - "
                             << status[i] << endl;
                    }
                }

                // Search
                else if (choice == 3)
                {
                    string name;
                    cout << "Enter name: ";
                    cin >> name;

                    for (int i = 0; i < count; i++)
                    {
                        if (customerNames[i] == name)
                        {
                            cout << "Found: "
                                 << customerNames[i] << " - "
                                 << services[i] << " - "
                                 << status[i] << endl;
                        }
                    }
                }

                // update
                else if (choice == 4)
                {
                    int index;
                    cout << "Enter index: ";
                    cin >> index;

                    if (index >= 0 && index < count)
                    {
                        cout << "Enter new service: ";
                        cin >> services[index];

                        cout << "Enter new status (waiting/done): ";
                        cin >> status[index];

                        cout << "Updated!\n";
                    }
                    else
                    {
                        cout << "Invalid index!\n";
                    }
                }

                // delete
                else if (choice == 5)
                {
                    int index;
                    cout << "Enter index: ";
                    cin >> index;

                    if (index >= 0 && index < count)
                    {
                        for (int i = index; i < count - 1; i++)
                        {
                            customerNames[i] = customerNames[i + 1];
                            services[i] = services[i + 1];
                            status[i] = status[i + 1];
                        }
                        count--;
                        cout << "Deleted!\n";
                    }
                    else
                    {
                        cout << "Invalid index!\n";
                    }
                }

                // sort
                else if (choice == 6)
                {
                    for (int i = 0; i < count - 1; i++)
                    {
                        for (int j = 0; j < count - i - 1; j++)
                        {

                            if (customerNames[j] > customerNames[j + 1])
                            {

                                swap(customerNames[j], customerNames[j + 1]);
                                swap(services[j], services[j + 1]);
                                swap(status[j], status[j + 1]);
                            }
                        }
                    }
                    cout << "Sorted!\n";
                }

            } while (choice != 7);
        }
    }
    return 0;
}