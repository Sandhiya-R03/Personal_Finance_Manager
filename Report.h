#ifndef REPORT_H
#define REPORT_H

#include "Income.h"
#include "Expense.h"

class Report {
public:
    void generateReport(const Income& income, const Expense& expense) const;
};

#endif

