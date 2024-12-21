#include "Report.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Report::generateReport(const Income& income, const Expense& expense) const {
    double totalIncome = income.getTotalIncome();
    double totalExpense = expense.getTotalExpense();
    double savings = totalIncome - totalExpense;

    cout << fixed << setprecision(2);
    cout << "\n--- Financial Report ---\n";
    cout << "Total Income: $" << totalIncome << "\n";
    cout << "Total Expense: $" << totalExpense << "\n";
    cout << "Net Savings: $" << savings << "\n\n";

    cout << "--- Detailed Income ---\n";
    for (const auto& inc : income.getIncomes()) {
        cout << inc.first << ": $" << inc.second << "\n";
    }

    cout << "\n--- Detailed Expenses ---\n";
    for (const auto& exp : expense.getExpenses()) {
        cout << exp.first << ": $" << exp.second << "\n";
    }
}

