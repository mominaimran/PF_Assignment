#include <iostream>
using namespace std;

int main() {
    float doorLength, doorWidth, windowLength, windowWidth, bookShelfLength, bookShelfWidth, roomLength, roomWidth, roomHeight;

    float doorArea, windowArea, wallArea, bookShelfArea, paintableArea;
    double paintNeeded;

    cout << "Enter the length and width of the door (in feet): ";
    cin >> doorLength >> doorWidth;
    cout << "Enter the length and width of each window (in feet): ";
    cin >> windowLength >> windowWidth;
    cout << "Enter the length and width of the bookshelf (in feet): ";
    cin >> bookShelfLength >> bookShelfWidth;
    cout << "Enter the length, width, and height of the room (in feet): ";
    cin >> roomLength >> roomWidth >> roomHeight;

    // Calculate areas
    wallArea = 2 * (roomLength + roomWidth) * roomHeight; // Total wall area
    doorArea = doorLength * doorWidth;                   // Area of the door
    windowArea = windowLength * windowWidth;             // Area of one window
    bookShelfArea = bookShelfLength * bookShelfWidth;    // Area of the bookshelf

    // Calculate paintable area (subtract door, 2 windows, and bookshelf)
    paintableArea = wallArea - (doorArea + 2 * windowArea + bookShelfArea);

    // Calculate paint needed
    paintNeeded = paintableArea / 120; // 1 gallon covers 120 square feet

    // Output results
    cout << "Amount of paint needed: " << paintNeeded << " gallons" << endl;

    return 0;
}