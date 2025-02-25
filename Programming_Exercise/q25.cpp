#include <iostream>
using namespace std;

int main() {
    const float pi = 3.14;
    float wireLength, radius, area; 

    cout << "Enter the length of the wire: ";
    cin >> wireLength;

    radius = wireLength / (2 * pi);
    area = pi * radius * radius;

    cout << "Radius of the circle: " << radius << endl;
    cout << "Area of the circle: " << area << endl;
    return 0;
}