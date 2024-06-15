# Finance-Manager-
Steps to Setup the Project

Install a C++ Compiler: Ensure you have a C++ compiler installed (e.g., g++, clang++).

Download JSON Library: Download the json.hpp file from the nlohmann/json GitHub repository and include it in your project directory.

Compile the Project: Use a command like g++ -o FinanceManager main.cpp FinanceManager.cpp User.cpp Transaction.cpp Income.cpp Expense.cpp Category.cpp -I path_to_json.hpp to compile the project. Make sure to include the path to the json.hpp file.

Run the Executable: Run the compiled executable to interact with the Personal Finance Manager via the command-line interface.

Here is an example of how to interact with the program
1. Add User
2. Add Category
3. Add Income
4. Add Expense
5. Display Users
6. Display Categories
7. Display User Transactions
8. Save to File
9. Load from File
10. Exit
Enter your choice: 1
Enter user name: John
1. Add User
2. Add Category
3. Add Income
4. Add Expense
5. Display Users
6. Display Categories
7. Display User Transactions
8. Save to File
9. Load from File
10. Exit
Enter your choice: 2
Enter category name: Salary
1. Add User
2. Add Category
3. Add Income
4. Add Expense
5. Display Users
6. Display Categories
7. Display User Transactions
8. Save to File
9. Load from File
10. Exit
Enter your choice: 3
Enter user name: John
Enter description: Monthly Salary
Enter amount: 5000
Enter category: Salary
1. Add User
2. Add Category
3. Add Income
4. Add Expense
5. Display Users
6. Display Categories
7. Display User Transactions
8. Save to File
9. Load from File
10. Exit
Enter your choice: 7
Enter user name: John
Income -> Description: Monthly Salary, Amount: 5000, Date: Mon Jun 14 12:00:00 2024, Category: Salary
Total Income: 5000
Total Expenses: 0
Net Balance: 5000
1. Add User
2. Add Category
3. Add Income
4. Add Expense
5. Display Users
6. Display Categories
7. Display User Transactions
8. Save to File
9. Load from File
10. Exit
Enter your choice: 8
