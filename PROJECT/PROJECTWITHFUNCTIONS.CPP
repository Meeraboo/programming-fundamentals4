#include <iostream>
using namespace std;
void printheader()
{
    cout << "-----------------------------------------\n";
    cout << "|   WELCOME TO THE CUSTOMER MANAGEMENT   |\n";
    cout << "-----------------------------------------\n";
}
int choserole()
{
    int role;
    cout << "===== SYSTEM START =====\n";
    cout << "1. Admin\n2.User\nChoose role: ";
    cin >> role;
    return role;
}
void adminMenue()
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
}
void userMenue()
{
    cout << "\n--- USER MENU ---\n";
    cout << "1. Add Customer\n";
    cout << "2. View Customers\n";
    cout << "3. Search Customer\n"; // by name
    cout << "4. Update Customer\n"; // service update and resetting status to waiting
    cout << "5. Delete Customer\n";
    cout << "6. Sort Customers\n";
    cout << "7. Mark Done\n";
    cout << "8. Exit\n";
}
int searchName(string name, int count, string customerNames[])
{
    for (int i = 0; i < count; i++)
    {
        if (customerNames[i] == name)
        {
            return i;
        }
    }
    return -1; // Not found
}

int main()
{
    ;
    string customerNames[100];
    string services[100];
    string status[100];

    int count = 0;
    int role;
    printheader();
    // role selection
    role = choserole();
    if (role == 1)
    {
        cout << "Admin role selected.\n";
        int choice;
        do
        {
            // Admin menu
            adminMenue();
            cin >> choice;
            if (choice == 1)
            {
                cout << "Viewing customers...\n";
                if (count == 0)
                {
                    cout << "No customers to display.\n";
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
            // view total customers
            else if (choice == 2)
            {
                cout << "Total customers: " << count << endl;
            }
            // clearing all data
            else if (choice == 3)
            {
                cout << "Clearing data...\n";
                count = 0;
            }
            // search customer by name
            else if (choice == 4)
            {
                cout << "Searching for customer...\n";
                string searchtoName;
                cout << "Enter customer name to search: ";
                cin >> searchtoName;
                int index = searchName(searchtoName, count, customerNames);
                if (index != -1)
                {
                    cout << "Customer found: " << customerNames[index] << " - " << services[index] << " - " << status[index] << endl;
                }
                else
                {
                    cout << "Customer not found.\n";
                }

            } // waiting customers
            else if (choice == 5)
            {
                cout << "Viewing waiting customers...\n";
                bool found = false;
                for (int i = 0; i < count; i++)
                {
                    if (status[i] == "waiting")
                    {
                        cout << customerNames[i] << " - "
                             << services[i] << endl;
                        found = true;
                    }
                }
                if (!found)
                {
                    cout << "No waiting customers.\n";
                }
            }
            else if (choice == 6)
            {
                cout << "Viewing completed customers...\n";
                bool found = false;
                for (int i = 0; i < count; i++)
                {
                    if (status[i] == "completed")
                    {
                        cout << customerNames[i] << " - "
                             << services[i] << endl;
                        found = true;
                    }
                }
                if (!found)
                {
                    cout << "No completed customers.\n";
                }
            }
            // sorting customers by name alphabetically
            else if (choice == 7)
            {
                cout << "Sorting customers by name...\n";

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
            // Sorting whole strings using dictionary order, so "done" will come before "waiting"

            else if (choice == 8)
            {
                cout << "Sorting customers by status...\n";

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
            // displaying first customer
            else if (choice == 9)
            {
                cout << "First customer:\n";
                if (count > 0)
                {
                    cout << customerNames[0] << " - "
                         << services[0] << " - "
                         << status[0] << endl;
                }
                else
                {
                    cout << "No customers to display.\n";
                }
            }
            // displaying last customer
            else if (choice == 10)
            {
                cout << "Last customer:\n";
                if (count > 0)
                {
                    cout << customerNames[count - 1] << " - "
                         << services[count - 1] << " - "
                         << status[count - 1] << endl;
                }
                else
                {
                    cout << "No customers to display.\n";
                }
            }
            else if (choice == 11)
            {
                cout << "Exiting admin menu...\n";
                break;
            }
            else
            {
                cout << "Invalid choice. Please try again.\n";
                break;
            }
        }

        while (choice != 11);
    }
    else if (role == 2)
    {
        cout << "User role selected.\n";
        userMenue();
        int choice;
        do
        {
            cin >> choice;
            // adding customer
            if (choice == 1)
            {
                cout << "Adding customer...\n";
                if (count < 100)
                {
                    cout << "Enter customer name: ";
                    cin >> customerNames[count];
                    cout << "Enter service: ";
                    cin >> services[count];
                    status[count] = "waiting";
                    count++;
                    cout << "Customer added successfully!\n";
                }
                else
                {
                    cout << "Customer limit reached. Cannot add more customers.\n";
                }
            }
            else if (choice == 2)
            {
                cout << "Viewing customers...\n";
                if (count == 0)
                {
                    cout << "No customers to display.\n";
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
            // search customer by name
            else if (choice == 3)
            {
                cout << "Searching for customer...\n";
                string searchtoName;
                cout << "Enter customer name to search: ";
                cin >> searchtoName;
                int index = searchName(searchtoName, count, customerNames);
                if (index != -1)
                {
                    cout << "Customer found: " << customerNames[index] << " - " << services[index] << " - " << status[index] << endl;
                }
                else
                {
                    cout << "Customer not found.\n";
                }
            }
            // updating customer service and resetting status to waiting
            else if (choice == 4)
            {
                cout << "Updating customer...\n";
                string searchtoName;
                cout << "Enter customer name to update: ";
                cin >> searchtoName;
                int index = searchName(searchtoName, count, customerNames);
                if (index != -1)
                {
                    cout << "Enter new service: ";
                    cin >> services[index];
                    status[index] = "waiting"; // Reset status to waiting when updated
                    cout << "Customer updated successfully!\n";
                }
                else
                {
                    cout << "Customer not found.\n";
                }
            }
            // deleting customer
            else if (choice == 5)
            {
                cout << "Deleting customer...\n";
                string searchtoName;
                cout << "Enter customer name to delete: ";
                cin >> searchtoName;
                int index = searchName(searchtoName, count, customerNames);
                if (index != -1)
                {
                    for (int i = index; i < count - 1; i++)
                    {
                        customerNames[i] = customerNames[i + 1];
                        services[i] = services[i + 1];
                        status[i] = status[i + 1];
                    }
                    count--;
                    cout << "Customer deleted successfully!\n";
                }
                else
                {
                    cout << "Customer not found.\n";
                }
            }
            else if (choice == 6)
            {
                cout << "Sorting customers by name...\n";
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
            else if (choice == 7)
            {
                cout << "Marking customer as done...\n";
                string searchtoName;
                cout << "Enter customer name to mark as done: ";
                cin >> searchtoName;
                int index = searchName(searchtoName, count, customerNames);
                if (index != -1)
                {
                    status[index] = "completed";
                    cout << "Customer marked as done!\n";
                }
                else
                {
                    cout << "Customer not found.\n";
                }
            }
            else if (choice == 8)
            {
                cout << "Exiting user menu...\n";
                break;
            }
            else
            {
                cout << "Invalid choice. Please try again.\n";
            }
        } while (choice != 8);
        {
            cout << "Invalid role selected. Exiting program.\n";
            return 0;
        }

        return 0;
    }