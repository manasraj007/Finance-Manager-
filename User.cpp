#include "User.h"

void User::addTransaction(shared_ptr<Transaction> transaction) {
    transactions.push_back(transaction);
}

void User::displayTransactions() const {
    for (const auto& transaction : transactions) {
        transaction->display();
    }
    cout << "Total Income: " << calculateTotalIncome() << endl;
    cout << "Total Expenses: " << calculateTotalExpenses() << endl;
    cout << "Net Balance: " << (calculateTotalIncome() - calculateTotalExpenses()) << endl;
}

double User::calculateTotalIncome() const {
    return accumulate(transactions.begin(), transactions.end(), 0.0, [](double sum, const shared_ptr<Transaction>& transaction) {
        if (dynamic_cast<Income*>(transaction.get())) {
            return sum + transaction->getAmount();
        }
        return sum;
    });
}

double User::calculateTotalExpenses() const {
    return accumulate(transactions.begin(), transactions.end(), 0.0, [](double sum, const shared_ptr<Transaction>& transaction) {
        if (dynamic_cast<Expense*>(transaction.get())) {
            return sum - transaction->getAmount();
        }
        return sum;
    });
}
