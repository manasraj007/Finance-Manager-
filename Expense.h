#ifndef EXPENSE_H
#define EXPENSE_H

#include "Transaction.h"

class Expense : public Transaction {
public:
    Expense(const std::string& desc, double amt, time_t dt, const Category& cat);
    void display() const override;
};

#endif // EXPENSE_H
