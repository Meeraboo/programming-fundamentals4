#include <iostream>
using namespace std;

int main()
{
    cout << "-----------------------------------------\n";
    cout << "|   WELCOME TO THE CUSTOMER MANAGEMENT   |\n";
    cout << "-----------------------------------------\n";

    string customerNames[100];
    string services[100];
    string status[100];

    int count = 0;
    int role;

    cout << "===== SYSTEM START =====\n";
    cout << "1. Admin\n2.User\nChoose role: ";
    cin >> role;

    // ADMIN role
    if (role == 1)
    {

        int choice;

        do
        {
            cout << "\n--- ADMIN MENU ---\n";
            cout << "1. View Customers\n";
            cout << "2. Total Customers\n";
            cout << "3. Clear Data\n";
            cout << "4. Search Customer\n";
            cout << "5. Waiting Customers\n";
            cout << "6. Completed Customers\n";
            cout << "7. Sort by Name\n";
            cout << "8. Sort by Status\n";
            cout << "9. First Customer\n";
            cout << "10. Last Customer\n";
            cout << "11. Exit\n";

            cin >> choice;

            // View
            if (choice == 1)
            {
                if (count == 0)
                {
                    cout << "No customers.\n";
                }
                else
                {
                    for (int i = 0; i < count; i++)
                    {
                        cout << i << ". "
                             << customerNames[i] << " - "
                             << services[i] << " - "
                             << status[i] << endl;
                    }
                }
            }

            // Total
            else if (choice == 2)
            {
                cout << "Total Customers: " << count << endl;
            }

            // Clear
            else if (choice == 3)
            {
                count = 0;
                cout << "All data cleared!\n";
            }

            // Search
            else if (choice == 4)
            {
                string name;
                cout << "Enter name: ";
                cin >> name;

                int found = 0;

                for (int i = 0; i < count; i++)
                {
                    if (customerNames[i] == name)
                    {
                        cout << "Found: "
                             << customerNames[i] << " - "
                             << services[i] << " - "
                             << status[i] << endl;
                        found = 1;
                    }
                }

                if (found == 0)
                {
                    cout << "Not found!\n";
                }
            }
            // waiting
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

            // Completed
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

                            string tempName = customerNames[j];
                            customerNames[j] = customerNames[j + 1];
                            customerNames[j + 1] = tempName;

                            string tempService = services[j];
                            services[j] = services[j + 1];
                            services[j + 1] = tempService;

                            string tempStatus = status[j];
                            status[j] = status[j + 1];
                            status[j + 1] = tempStatus;
                        }
                    }
                }
                cout << "Sorted by name!\n";
            }

            // sort by statuss
            //Sorting whole strings using dictionary order, so "done" will come before "waiting"
            
            else if (choice == 8)
            {
                for (int i = 0; i < count - 1; i++)
                {
                    for (int j = 0; j < count - i - 1; j++)
                    {

                        if (status[j] > status[j + 1])
                        {

                            string t1 = customerNames[j];
                            customerNames[j] = customerNames[j + 1];
                            customerNames[j + 1] = t1;

                            string t2 = services[j];
                            services[j] = services[j + 1];
                            services[j + 1] = t2;

                            string t3 = status[j];
                            status[j] = status[j + 1];
                            status[j + 1] = t3;
                        }
                    }
                }
                cout << "Sorted by status!\n";
            }

            else if (choice == 9)
            {
                if (count > 0)
                {
                    cout << "First: " << customerNames[0] << endl;
                }
                else
                {
                    cout << "No data\n";
                }
            }

            else if (choice == 10)
            {
                if (count > 0)
                {
                    cout << "last: " << customerNames[count - 1] << endl;
                }
                else
                {
                    cout << "no data\n";
                }
            }

        } while (choice != 11);
    }

    // user
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
            cout << "7. Mark Done\n";
            cout << "8. Exit\n";

            cin >> choice;

            // add
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

            // view
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

            // search

            else if (choice == 3)
            {
                string name;
                cout << "Enter name: ";
                cin >> name;

                for (int i = 0; i < count; i++)
                {
                    if (customerNames[i] == name)
                    {
                        cout << "Found at index " << i << endl;
                    }
                }
            }

            // Update
            else if (choice == 4)
            {
                int index;
                cout << "Enter index: ";
                cin >> index;

                if (index >= 0 && index < count)
                {
                    cout << "Enter new service: ";
                    cin >> services[index];

                    cout << "Enter new status: ";
                    cin >> status[index];

                    cout << "Updated!\n";
                }
                else
                {
                    cout << "Invalid index!\n";
                }
            }

            // Delete
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

            // Sort
            else if (choice == 6)
            {
                for (int i = 0; i < count - 1; i++)
                {
                    for (int j = 0; j < count - i - 1; j++)
                    {

                        if (customerNames[j] > customerNames[j + 1])
                        {

                            string t1 = customerNames[j];
                            customerNames[j] = customerNames[j + 1];
                            customerNames[j + 1] = t1;

                            string t2 = services[j];
                            services[j] = services[j + 1];
                            services[j + 1] = t2;

                            string t3 = status[j];
                            status[j] = status[j + 1];
                            status[j + 1] = t3;
                        }
                    }
                }
                cout << "Sorted!\n";
            }

            // Mark done
            else if (choice == 7)
            {
                int index;
                cout << "Enter index: ";
                cin >> index;

                if (index >= 0 && index < count)
                {
                    status[index] = "done";
                    cout << "Marked as done!\n";
                }
                else
                {
                    cout << "Invalid index!\n";
                }
            }

        } while (choice != 8);
    }

    else
    {
        cout << "Invalid role!\n";
    }

    cout << "===== SYSTEM END =====\n";
    return 0;
}