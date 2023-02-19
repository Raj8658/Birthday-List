#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<string, string> birthdayList; // Map to store names and birthdays

    int choice = 0; // Variable to store user's menu choice
    string name, birthday;

    while (choice != 4)
    {
        cout << "\n=== Birthday List ===\n";
        cout << "1. Add a birthday\n";
        cout << "2. Find a birthday\n";
        cout << "3. Display all birthdays\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "\nEnter name: ";
                cin >> name;
                cout << "Enter birthday (DD/MM/YYYY): ";
                cin >> birthday;
                birthdayList[name] = birthday;
                cout << "\nBirthday added for " << name << "\n";
                break;

            case 2:
                cout << "\nEnter name: ";
                cin >> name;
                if (birthdayList.find(name) != birthdayList.end())
                {
                    cout << name << "'s birthday is on " << birthdayList[name] << "\n";
                }
                else
                {
                    cout << name << " not found in the list\n";
                }
                break;

            case 3:
                if (birthdayList.empty())
                {
                    cout << "\nBirthday list is empty\n";
                }
                else
                {
                    cout << "\nBirthday List:\n";
                    for (auto itr = birthdayList.begin(); itr != birthdayList.end(); ++itr)
                    {
                        cout << itr->first << ": " << itr->second << "\n";
                    }
                }
                break;

            case 4:
                cout << "\nExiting...\n";
                break;

            default:
                cout << "\nInvalid choice. Please try again.\n";
                break;
        }
    }

    return 0;
}