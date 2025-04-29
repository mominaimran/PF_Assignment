#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double sizeBymanufacturer, actualSize;

    cout << "Enter size of hard drive given by manufacturer(GB): ";
    cin >> sizeBymanufacturer;

    actualSize = (sizeBymanufacturer * 1000000000) / pow(1024, 3);

    cout << fixed << showpoint << setprecision(2);
    cout << "Actual Size: " << actualSize;

    return 0;
}