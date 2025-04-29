#include <iostream>
using namespace std;

int main() {
    double capacityInGallons, milesPerGallon, totalMilesTravel;
     
    cout << "Enter capacity in gallons of fuel tank: ";
    cin >> capacityInGallons;
    cout << "Enter miles per gallon the automobile can be driven: ";
    cin >> milesPerGallon;

    totalMilesTravel = capacityInGallons * milesPerGallon;

    cout << "The number of miles the automobile can be driven without refueling: " << totalMilesTravel << " miles";

    return 0;
}