#include "FinanceManager.h"

void FinanceManager::addUser(const string& name) {
    users.emplace_back(name);
}

void FinanceManager::addCategory(const string& name) {
    categories.emplace_back(name);
}

void FinanceManager::addTransaction(const string& userName, shared_ptr<Transaction> transaction) {
    for (auto& user : users) {
        if (user.getName() == userName) {
            user.addTransaction(transaction);
            return;
        }
    }
    cout << "User not found!" << endl;
}

void FinanceManager::displayUsers() const {
    for (const auto& user : users) {
        cout << user.getName() << endl;
    }
}

void FinanceManager::displayCategories() const {
    for (const auto& category : categories) {
        cout << category.getName() << endl;
    }
}

void FinanceManager::displayUserTransactions(const string& userName) const {
    for (const auto& user : users) {
        if (user.getName() == userName) {
            user.displayTransactions();
            return;
        }
    }
    cout << "User not found!" << endl;
}

void FinanceManager::saveToFile(const string& filename) const {
    json j;
    j["users"] = json::array();
    for (const auto& user : users) {
        json jUser;
        jUser["name"] = user.getName();
        jUser["transactions"] = json::array();
        for (const auto& transaction : user.getTransactions()) {
            json jTransaction;
            jTransaction["description"] = transaction->getDescription();
            jTransaction["amount"] = transaction->getAmount();
            jTransaction["date"] = transaction->getDate();
            jTransaction["category"] = transaction->getCategory();
            jTransaction["type"] = (dynamic_cast<Income*>(transaction.get()) != nullptr) ? "Income" : "Expense";
            jUser["transactions"].push_back(jTransaction);
        }
        j["users"].push_back(jUser);
    }
    ofstream file(filename);
    file << j;
}

void FinanceManager::loadFromFile(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Could not open file!" << endl;
        return;
    }
    json j;
    file >> j;
    users.clear();
    for (const auto& jUser : j["users"]) {
        User user(jUser["name"]);
        for (const auto& jTransaction : jUser["transactions"]) {
            shared_ptr<Transaction> transaction;
            if (jTransaction["type"] == "Income") {
                transaction = make_shared<Income>(jTransaction["description"], jTransaction["amount"], jTransaction["date"], Category(jTransaction["category"]));
            } else {
                transaction = make_shared<Expense>(jTransaction["description"], jTransaction["amount"], jTransaction["date"], Category(jTransaction["category"]));
            }
            user.addTransaction(transaction);
        }
        users.push_back(user);
    }
}
