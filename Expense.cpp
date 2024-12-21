#include "Expense.h"
#include <iostream>

using namespace std;

void Expense::addExpense() {
    string category;
    double amount;

    cout << "Enter expense category: ";
    cin.ignore();
    getline(cin, category);

    cout << "Enter amount: ";
    cin >> amount;

    expenses.push_back({category, amount});
    cout << "Expense added successfully!\n";
}

double Expense::getTotalExpense() const {
    double total = 0.0;
    for (const auto& expense : expenses) {
        total += expense.second;
    }
    return total;
}

const vector<pair<string, double>>& Expense::getExpenses() const {
    return expenses;
}

