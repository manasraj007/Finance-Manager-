#ifndef INCOME_H
#define INCOME_H

#include "Transaction.h"

class Income : public Transaction {
public:
    Income(const std::string& desc, double amt, time_t dt, const Category& cat);
    void display() const override;
};

#endif // INCOME_H
