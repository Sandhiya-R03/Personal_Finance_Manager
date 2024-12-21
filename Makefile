all: PersonalFinanceManager

PersonalFinanceManager: main.o Income.o Expense.o Report.o
\tg++ -o PersonalFinanceManager main.o Income.o Expense.o Report.o

main.o: main.cpp Income.h Expense.h Report.h
\tg++ -c main.cpp

Income.o: Income.cpp Income.h
\tg++ -c Income.cpp

Expense.o: Expense.cpp Expense.h
\tg++ -c Expense.cpp

Report.o: Report.cpp Report.h
\tg++ -c Report.cpp

clean:
\trm -f *.o PersonalFinanceManager
