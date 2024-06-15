#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include <ctime>
#include <iostream> // For std::cout and std::endl
#include "Category.h"

class Transaction {
private:
    std::string description;
    double amount;
    time_t date;
    Category category;

public:
    Transaction(const std::string& desc, double amt, time_t dt, const Category& cat);
    virtual ~Transaction() = default;
    virtual void display() const;
    std::string getDescription() const;
    double getAmount() const;
    time_t getDate() const;
    std::string getCategory() const;
};

class Income : public Transaction {
public:
    Income(const std::string& desc, double amt, time_t dt, const Category& cat);
    void display() const override;
};

class Expense : public Transaction {
public:
    Expense(const std::string& desc, double amt, time_t dt, const Category& cat);
    void display() const override;
};

#endif // TRANSACTION_H
