//----------------------------------------------
// Purpose: Test user linked list
// Author:  Edgar Alcocer
//----------------------------------------------

#include "userList.h"

//----------------------------------------------
int main()
{
    // create variables for a UserList object and a selection
    int selection;
    UserList list;
    // menu interface to call (AddUser, incrementcount, LargestCount, Print, and Quit)
    do
    {
        cout << "Welcome to GroupMe Messaging!!!" << endl;
        cout << "<><><><><><><><><><><><><><><><><><><>" << endl;
        cout << "1. Add a user to the group" << endl;
        cout << "2. Increment the message count for selected user" << endl;
        cout << "3. Find the user with largest message count" << endl;
        cout << "4. Print information about all users in the group" << endl;
        cout << "5. To exit the program" << endl;
        cout << "Selection: ";
        cin >> selection;

        if (cin.fail())
        {
            cout << "Error!, input not recognized" << endl;
            return 0;
        }

        if (selection <= 0 || selection > 6)
        {
            cout << "Error!, please select an option between 1-5" << endl;
            cout << endl;
        }

        switch (selection)
        {
        case 1:
        {
            // insert a new user at the end of the list
            cout << endl;
            list.addUser();
            cout << endl;
            break;
        }
        case 2:
        {
            // input phone number to compare
            string phoneNumber;
            cout << endl;
            cout << "Please input the phone number of the user you want to increase the count" << endl;
            cin >> phoneNumber;
            list.incrementCount(phoneNumber);
            list.groupCount();
            break;
        }
        case 3:
        {
            // find the user with the largest message count in the group
            list.largestCount();
            break;
        }
        case 4:
        {
            // print all user's with information
            cout << endl;
            list.print();
            break;
        }
        case 5:
        {
            cout << "Thank you for using GroupMe messaging" << endl;
            break;
        }
        }
    } while (selection != 5);
}