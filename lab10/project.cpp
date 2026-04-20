#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main()
{
    int index = 0;
    int totalcustomers = 100;
    string customerNames[100];
    string servicesRequested[100];
    string assignedSaff[100];
    string servicesStatus[100];
    string staffNames[50];
    int servicesCompleted[50];
    int staffcount = 0;
    string history[100];
    int historyCount = 0;

    while (true)
    {

        // main header of saloon management system
        system("cls");
        cout << "\n\t*****************************************\n";
        cout << "\t*                                       *\n";
        cout << "\t*      SALOON MANAGEMENT SYSTEM    *\n";
        cout << "\t*                                       *\n";
        cout << "\t*     \"Look Good, Feel Good\"           *\n";
        cout << "\t*                                       *\n";
        cout << "\t*****************************************\n\n";

        cout << " \tUSERMENUE\t " << endl;
        cout << " 1.ADMIN" << endl;
        cout << " 2.RECEPTIONIST" << endl;
        cout << " 3.Exit" << endl;
        cout << "chose option : " << endl;
        int option;
        cin >> option;

        cout << " U chose " << option;
        if (option == 1)
        {
            // admin code
            // add staff members

            cout << "Enter number of staff members to add: ";
            int numStaff;
            cin >> numStaff;

            for (int i = 0; i < numStaff; i++)
            {
                cout << "Enter name of staff member " << i + 1 << ": ";
                cin >> staffNames[staffcount];
                servicesCompleted[staffcount] = 0;
                staffcount++;
            }
            cout << "nStaff members added successfully!" << endl;

            cout << "welcome to admin panel" << endl;
            getch();
        }
        else if (option == 2)
        {
            // receptionist code
            system("cls");
            cout << "welcome to receptionist panel" << endl;

            cout << "1. Add new customer" << endl;
            cout << "2. View waiting customers" << endl;
            cout << "3. Assign staff to customer" << endl;

            cout << "4. Services in progress" << endl;
            cout << "5.update service status" << endl;
            cout << "6. View service history" << endl;
            cout << "Enter number u want to perform : " << endl;

            while (true)
            {
                int recOption;
                cin >> recOption;
                if (recOption == 1)
                {
                    cout << "Add a new customer" << endl; // adding new customer
                    string customernames;
                    cin >> customernames;
                    customerNames[index] = customernames;

                    string servicestype;
                    cout << "Enter the service type" << endl;
                    cin >> servicestype;

                    servicesRequested[index] = servicestype;
                    assignedSaff[index] = "not assigned";
                    servicesStatus[index] = "waiting";
                    index++;
                    cout << "Customer added successfully!" << endl;
                }

                if (recOption == 2) // to see the record of waiting customers
                {
                    cout << "Waiting customers:" << endl;

                    for (int i = 0; i < index; i++)
                    {
                        if (servicesStatus[i] == "waiting")
                        {
                            cout << "customer name : " << customerNames[i] << endl;
                        }
                    }
                    for (int i = 0; i < index; i++)
                    {
                        cout << "service requested : " << servicesRequested[i] << endl;
                        cout << "assigned staff : " << assignedSaff[i] << endl;
                        cout << "service status : " << servicesStatus[i] << endl;

                        cout << i << ". " << customerNames[i] << " - "
                             << servicesStatus[i] << endl;
                    }
                }

                if (recOption == 3) // to assign staff to customer
                {
                    cout << "Assign staff to customer" << endl;
                    int minIndex = 0;

                    for (int i = 0; i < staffcount; i++)
                    {
                        if (servicesCompleted[i] < servicesCompleted[minIndex])
                        {
                            minIndex = i;
                        }
                    }
                    int cIndex;
                    cout << "Enter customer index: ";
                    cin >> cIndex;
                    if (cIndex < 0 || cIndex >= index)
                    {
                        cout << "Invalid index!" << endl;
                    }
                    else
                    {
                        // safe to use
                        assignedSaff[cIndex] = staffNames[minIndex];
                        servicesStatus[cIndex] = "in-progress";
                    }
                }

                if (recOption == 4)
                {
                    cout << "Services in progress:" << endl;
                    for (int i = 0; i < index; i++)
                    {
                        if (servicesStatus[i] == "in-progress")
                        {
                            cout << i << ". " << customerNames[i] << " - "
                                 << servicesRequested[i] << " - Assigned Staff: "
                                 << assignedSaff[i] << endl;
                        }
                    }
                }
                cout << "Enter number u want to perform : " << endl;
                cin >> recOption;
                int cIndex;
                if (recOption == 5)
                {

                    // update status
                    cout << "Updated Customer List:" << endl;
                    for (int i = 0; i < index; i++)
                    {
                        cout << i << ". " << customerNames[i] << " - "
                             << servicesStatus[i] << endl;
                    }
                    cout << "Enter customer index to mark as done: ";
                    cin >> cIndex;

                    servicesStatus[cIndex] = "done";

                    // find staff index
                    for (int i = 0; i < staffcount; i++)
                    {
                        if (staffNames[i] == assignedSaff[cIndex])
                        {
                            servicesCompleted[i]++;
                        }
                    }
                }
                cout << "Enter number u want to perform : " << endl;
                cin >> recOption;
                if (recOption == 6) // to view service history
                {
                    cout << "Service History:" << endl;
                    for (int i = 0; i < historyCount; i++)
                    {
                        cout << history[i] << endl;
                    }

                    // save history

                    history[historyCount] = customerNames[cIndex] + " - " +
                                            servicesRequested[cIndex] + " - " +
                                            assignedSaff[cIndex] + " - Done";

                    historyCount++;
                    break;
                }

                getch();
            }
        }
        else if (option == 3)
        {
            cout << "Exiting the system. Goodbye!" << endl;
            break;
        }
        else
        {
            cout << "Invalid option! Please try again." << endl;
            getch();
        }
    }
}
