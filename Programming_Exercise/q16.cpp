#include <iostream>
#include <cmath>
using namespace std;

int main() {
   const double oneMilkCarton = 3.78, oneLiterMilkCost = 0.38, eachCartonProfit = 0.27;
   double totalMilkProduced, milkCartonsNeeded, costOfProducingMilk, profit;

   cout << "Enter the total amount of milk produced in the morning: ";
   cin >> totalMilkProduced;

   milkCartonsNeeded = round(totalMilkProduced / oneMilkCarton);
   cout << "Milk cartons needed to hold milk: " << milkCartonsNeeded << " cartons" << endl;

   costOfProducingMilk = totalMilkProduced * oneLiterMilkCost;
   cout << "Cost of producing milk: " << costOfProducingMilk << "$" << endl;

    profit = milkCartonsNeeded * eachCartonProfit;
    cout << "Profit for producing milk: " << profit << "$" << endl;

   return 0;
}