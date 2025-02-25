#include <iostream>
#include <cmath> // For ceil() function
using namespace std;

int main() {
    // Declare variables
    double bagCapacity;
    const double metricTonInPounds = 2205.0; // 1 metric ton = 2205 pounds

    // Prompt user for input
    cout << "Enter the capacity of a single bag (in pounds): ";
    cin >> bagCapacity;

    // Calculate the number of bags needed
    double numberOfBags = metricTonInPounds / bagCapacity;
    int bagsNeeded = ceil(numberOfBags); // Round up to the nearest whole number

    // Output the result
    cout << "Number of bags needed to store one metric ton of rice: " << bagsNeeded << endl;

    return 0;
}