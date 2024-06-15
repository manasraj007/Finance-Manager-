#include "Income.h"

Income::Income(const std::string& desc, double amt, time_t dt, const Category& cat)
    : Transaction(desc, amt, dt, cat) {}

void Income::display() const {
    std::cout << "Income: ";
    Transaction::display();
}
