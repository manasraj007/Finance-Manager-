#pragma once
#include "Transaction.h"
#include <vector>
#include <string>
#include <memory>
#include <iostream>
#include <numeric>

using namespace std;

class User {
private:
    string name;
    vector<shared_ptr<Transaction>> transactions;

public:
    User(const string& name) : name(name) {}
    string getName() const { return name; }
    void addTransaction(shared_ptr<Transaction> transaction);
    void displayTransactions() const;
    double calculateTotalIncome() const;
    double calculateTotalExpenses() const;
    vector<shared_ptr<Transaction>> getTransactions() const { return transactions; }
};
