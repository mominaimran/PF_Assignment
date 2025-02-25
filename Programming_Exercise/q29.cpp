#include <iostream>
#include <cmath> // For sqrt function
using namespace std;

int main() {
    // Declare variables
    double concreteVolume; // Volume of concrete in cubic yards
    double thickness;      // Thickness of the patio in inches
    double ratio;          // Ratio of length to width (e.g., 2.0 for length = 2 * width)
    double thicknessFeet;  // Thickness in feet
    double volumeFeet;     // Volume in cubic feet
    double width, length;  // Width and length of the patio in feet

    // Prompt user for input
    cout << "Enter the amount of premixed concrete ordered (in cubic yards): ";
    cin >> concreteVolume;
    cout << "Enter the thickness of the patio (in inches): ";
    cin >> thickness;
    cout << "Enter the ratio of length to width (e.g., 2.0 for length = 2 * width): ";
    cin >> ratio;

    // Convert units
    thicknessFeet = thickness / 12; // Convert thickness from inches to feet
    volumeFeet = concreteVolume * 27; // Convert volume from cubic yards to cubic feet

    // Calculate width
    width = sqrt(volumeFeet / (ratio * thicknessFeet));

    // Calculate length
    length = ratio * width;

    // Output results
    cout << "Width of the patio: " << width << " feet" << endl;
    cout << "Length of the patio: " << length << " feet" << endl;

    return 0;
}