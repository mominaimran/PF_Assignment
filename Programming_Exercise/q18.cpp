#include <iostream>
using namespace std;

int main() {
    double payRate, hoursPerWeek, grossIncome, netIncome;
    double clothExpense, schoolSuppliesExpense, savingBonds, parentContribution;

    const double TAX_RATE = 0.14;
    const double CLOTHES_PERCENT = 0.10;
    const double SCHOOL_SUPPLIES = 0.01;
    const double SAVING_BONDS_PERCENT = 0.25;
    const double PARENTS_MATCH = 0.50;
    const int WEEKS = 5;

    cout << "Enter your hourly pay rate: ";
    cin >> payRate;

    cout << "Enter number of hours worked per week: ";
    cin >> hoursPerWeek;

    grossIncome = payRate * hoursPerWeek * WEEKS;
    netIncome = grossIncome * (1-TAX_RATE);
    clothExpense = netIncome * CLOTHES_PERCENT;
    schoolSuppliesExpense = netIncome * SCHOOL_SUPPLIES;
    savingBonds = (netIncome - clothExpense - schoolSuppliesExpense) * SAVING_BONDS_PERCENT;

    parentContribution = savingBonds * PARENTS_MATCH;

    cout << "Income before tax: " << grossIncome << endl;
    cout << "Income after tax: " << netIncome << endl;
    cout << "money spent on clothes and other accessories: " << clothExpense << endl;
    cout << "money spent on school supplies: " << schoolSuppliesExpense << endl;
    cout << "money spent on saving bonds: " << savingBonds << endl;
    cout << "money spent by parents on saving bonds: " << parentContribution << endl;

    return 0;
}