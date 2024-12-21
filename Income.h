#ifndef INCOME_H
#define INCOME_H

#include <vector>
#include <string>

class Income {
private:
    std::vector<std::pair<std::string, double>> incomes;

public:
    void addIncome();
    double getTotalIncome() const;
    const std::vector<std::pair<std::string, double>>& getIncomes() const;
};

#endif
