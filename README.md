# Finance manager
## Overview
Finance manager is a simple C++ console application for managing personal finances. It allows users to add transactions (both income and expenses), categorize them, and calculate totals for income and expenses. The application uses the nlohmann/json library to save and load data to/from a JSON file.
## Features
- Add transactions with descriptions, amounts, categories, and types (income or expense).
- Display all transactions for a user.
- Calculate total income and expenses.
- Calculate the available Balance.
- Save and load user data to/from a JSON file.
## Requirement
- C++ Compiler(e.g gcc,g++)
## Installation
1. **Clone the Repository**
    ```sh
     git clone https://github.com/yourusername/finance-manager.git
    cd Finance-Manager-

    ```
2. **Download nlohmann/json:**
    Download `json.hpp` from the [nlohmann/json](https://github.com/nlohmann/json) repository and place it in the project directory. 
    To download you have to go in the single-include folder of nlohmann and copy the raw code of 'json.hpp' present in the folder and place in the folder of your project directory.
3. **Compile the project:**
    ```sh
    g++ -o FinanceManager main.cpp FinanceManager.cpp User.cpp Transaction.cpp Category.cpp -std=c++20

    ```
## Usage
Run the executable:
```sh
./FinanceManager