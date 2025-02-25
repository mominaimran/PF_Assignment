#include <iostream>
using namespace std;

int main() {
    float length, width, wireLength;
    cout << "Enter the length of the wire: ";
    cin >> wireLength;
    
    width = wireLength / 5;
    length = 1.5 * width;

    cout << "Length of the picture frame is: " << length << endl;
    cout << "Width of the picture frame is: " << width << endl;

    return 0;
}