#include "Expense.h"

Expense::Expense(const string& desc, double amt, time_t dt, const Category& cat)
    : Transaction(desc, amt, dt, cat) {}

void Expense::display() const {
    cout << "Expense -> ";
    Transaction::display();
}
