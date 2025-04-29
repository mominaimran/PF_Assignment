#include <iostream>
using namespace std;

int main() {
    double originalPrice, markupPricePercent, salesTaxRate;

    cout << "Enter original prices of sold item: ";
    cin >> originalPrice;

    cout << "Percentage of markup price: ";
    cin >> markupPricePercent;

    cout << "Enter sales taxt rate: ";
    cin >> salesTaxRate;

    double sellingPrice = originalPrice + (originalPrice * (markupPricePercent/100));
    double salesTax = sellingPrice * salesTaxRate/100;
    double finalPrice = sellingPrice + salesTax;

    //cout all 6

    return 0;
}