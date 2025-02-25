#include <iostream>
#include <iomanip> // For formatting output
using namespace std;

int main() {
    // Declare variables
    int numShares;
    double purchasePrice, sellingPrice;
    double amountInvested, amountReceived, serviceCharges, amountGainedOrLost, amountAfterSelling;

    // Prompt user for input
    cout << "Enter the number of shares sold: ";
    cin >> numShares;
    cout << "Enter the purchase price of each share: $";
    cin >> purchasePrice;
    cout << "Enter the selling price of each share: $";
    cin >> sellingPrice;

    // Perform calculations
    amountInvested = numShares * purchasePrice; // Amount invested
    amountReceived = numShares * sellingPrice; // Amount received from selling
    serviceCharges = 0.015 * (amountInvested + amountReceived); // Service charges (1.5%)
    amountGainedOrLost = amountReceived - amountInvested - serviceCharges; // Amount gained or lost
    amountAfterSelling = amountReceived - serviceCharges; // Amount received after selling

    // Output results
    cout << fixed << setprecision(2); // Format output to 2 decimal places
    cout << "\nAmount Invested: $" << amountInvested << endl;
    cout << "Total Service Charges: $" << serviceCharges << endl;
    cout << "Amount Gained or Lost: $" << amountGainedOrLost << endl;
    cout << "Amount Received After Selling: $" << amountAfterSelling << endl;

    return 0;
}