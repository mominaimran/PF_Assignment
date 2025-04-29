#include <iostream>
#include <cmath>
using namespace std;

int main() {
   const double oneMilkCarton = 3.78;
   double oneLiterMilkCost, eachCartonProfit;
   double totalMilkProduced, milkCartonsNeeded, costOfProducingMilk, profit;

   cout << "Enter cost of producing one liter of milk: ";
   cin >> oneLiterMilkCost;

   cout << "Enter profit on each carton of milk: ";
   cin >> eachCartonProfit;

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