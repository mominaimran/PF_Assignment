#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double decimalNum;

    cout << "Enter  a decimal number: ";
    cin >> decimalNum;

    int intNum = static_cast<int>(round(decimalNum));

    cout << "Rounded to nearest integer: " << intNum << endl;
    
    return 0;
}