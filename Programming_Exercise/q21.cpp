#include <iostream>
#include <cmath> // For pow() function
using namespace std;

int main() {
    // Declare variables
    double M1, M2, d;
    const double k = 6.67e-8; // Gravitational constant in dyn·cm²/g²

    // Prompt user for input
    cout << "Enter the mass of the first body (M1 in grams): ";
    cin >> M1;
    cout << "Enter the mass of the second body (M2 in grams): ";
    cin >> M2;
    cout << "Enter the distance between the two bodies (d in centimeters): ";
    cin >> d;

    // Calculate gravitational force
    double F = (k * M1 * M2) / pow(d, 2);

    // Output the result
    cout << "The gravitational force between the two bodies is: " << F << " dynes" << endl;

    return 0;
}