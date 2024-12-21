#include <iostream>
#include "Income.h"
#include "Expense.h"
#include "Report.h"

using namespace std;

int main() {
    Income incomeManager;
    Expense expenseManager;
    Report report;

    int choice;
    do {
        cout << "\n--- Personal Finance Manager ---\n";
        cout << "1. Add Income\n";
        cout << "2. Add Expense\n";
        cout << "3. View Report\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                incomeManager.addIncome();
                break;
            case 2:
                expenseManager.addExpense();
                break;
            case 3:
                report.generateReport(incomeManager, expenseManager);
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
