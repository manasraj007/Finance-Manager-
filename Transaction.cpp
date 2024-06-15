#include "Transaction.h"

Transaction::Transaction(const string& desc, double amt, time_t dt, const Category& cat)
    : description(desc), amount(amt), date(dt), category(cat) {}

void Transaction::display() const {
    cout << "Description: " << description << ", Amount: " << amount << ", Date: " << ctime(&date) << ", Category: " << category.getName() << endl;
}

Income::Income(const string& desc, double amt, time_t dt, const Category& cat)
    : Transaction(desc, amt, dt, cat) {}

void Income::display() const {
    cout << "Income: ";
    Transaction::display();
}

Expense::Expense(const string& desc, double amt, time_t dt, const Category& cat)
    : Transaction(desc, amt, dt, cat) {}

void Expense::display() const {
    cout << "Expense: ";
    Transaction::display();
}
