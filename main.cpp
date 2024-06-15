#include "FinanceManager.h"
#include <iostream>

using namespace std;

int main() {
    FinanceManager manager;
    int choice;

    while (true) {
        cout << "1. Add User\n"
             << "2. Add Category\n"
             << "3. Add Income\n"
             << "4. Add Expense\n"
             << "5. Display Users\n"
             << "6. Display Categories\n"
             << "7. Display User Transactions\n"
             << "8. Save to File\n"
             << "9. Load from File\n"
             << "10. Exit\n"
             << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string userName;
                cout << "Enter user name: ";
                cin >> userName;
                manager.addUser(userName);
                break;
            }
            case 2: {
                string categoryName;
                cout << "Enter category name: ";
                cin >> categoryName;
                manager.addCategory(categoryName);
                break;
            }
            case 3: {
                string userName, desc, category;
                double amount;
                cout << "Enter user name: ";
                cin >> userName;
                cout << "Enter description: ";
                cin >> desc;
                cout << "Enter amount: ";
                cin >> amount;
                cout << "Enter category: ";
                cin >> category;
                time_t now = time(0);
                manager.addTransaction(userName, make_shared<Income>(desc, amount, now, Category(category)));
                break;
            }
            case 4: {
                string userName, desc, category;
                double amount;
                cout << "Enter user name: ";
                cin >> userName;
                cout << "Enter description: ";
                cin >> desc;
                cout << "Enter amount: ";
                cin >> amount;
                cout << "Enter category: ";
                cin >> category;
                time_t now = time(0);
                manager.addTransaction(userName, make_shared<Expense>(desc, amount, now, Category(category)));
                break;
            }
            case 5:
                manager.displayUsers();
                break;
            case 6:
                manager.displayCategories();
                break;
            case 7: {
                string userName;
                cout << "Enter user name: ";
                cin >> userName;
                manager.displayUserTransactions(userName);
                break;
            }
            case 8:
                manager.saveToFile("finance_data.json");
                break;
            case 9:
                manager.loadFromFile("finance_data.json");
                break;
            case 10:
                return 0;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }
}
