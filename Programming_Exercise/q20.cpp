#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double fixedCommission, commissionPercentage, purchasingCost;
    double minAmount, maxAmount;
    double minSellingPrice, maxSellingPrice;
    double minCommission, maxCommission;

    // Prompt user for input
    cout << "Enter the fixed commission: ";
    cin >> fixedCommission;
    cout << "Enter the commission percentage (in decimal form, e.g., 0.30 for 30%): ";
    cin >> commissionPercentage;
    cout << "Enter the purchasing cost of the car: ";
    cin >> purchasingCost;
    cout << "Enter the minimum amount to be added to the purchasing cost: ";
    cin >> minAmount;
    cout << "Enter the maximum amount to be added to the purchasing cost: ";
    cin >> maxAmount;

    // Calculate selling prices
    minSellingPrice = purchasingCost + minAmount;
    maxSellingPrice = purchasingCost + maxAmount;

    // Calculate commission range
    minCommission = fixedCommission + (commissionPercentage * (minSellingPrice - purchasingCost));
    maxCommission = fixedCommission + (commissionPercentage * (maxSellingPrice - purchasingCost));

    // Output results
    cout << "\nMinimum Selling Price: $" << minSellingPrice << endl;
    cout << "Maximum Selling Price: $" << maxSellingPrice << endl;
    cout << "Salesperson's Commission Range: $" << minCommission << " to $" << maxCommission << endl;

    return 0;
}