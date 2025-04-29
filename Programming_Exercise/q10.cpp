#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2, num3, num4, num5, sum;
    cout << "Enter five decimal numbers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    sum = num1 + num2 + num3 + num4 + num5;

    int intNum = static_cast<int>(round(sum));

    cout << "Integer number: " << intNum;

    return 0;
}