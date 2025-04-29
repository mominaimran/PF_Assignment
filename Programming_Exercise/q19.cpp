#include <iostream>
using namespace std;

int main() {
    double qaurter, dimes, nickels, coinsInPenies;

    cout << "Enter quarter: ";
    cin >> qaurter;

    cout << "Enter dimes: ";
    cin >> dimes;

    cout << "Enter nickels: ";
    cin >> nickels;

    coinsInPenies = (qaurter*25) + (dimes*10) + (nickels*5);

    cout << "Total value in pennies: " << coinsInPenies;

    return 0;
}