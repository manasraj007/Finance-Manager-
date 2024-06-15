#pragma once
#include "User.h"
#include "Category.h"
#include <vector>
#include <string>
#include <memory>
#include <iostream>
#include <fstream>
#include <json.hpp>

using namespace std;
using json = nlohmann::json;

class FinanceManager {
private:
    vector<User> users;
    vector<Category> categories;

public:
    void addUser(const string& name);
    void addCategory(const string& name);
    void addTransaction(const string& userName, shared_ptr<Transaction> transaction);
    void displayUsers() const;
    void displayCategories() const;
    void displayUserTransactions(const string& userName) const;
    void saveToFile(const string& filename) const;
    void loadFromFile(const string& filename);
};
