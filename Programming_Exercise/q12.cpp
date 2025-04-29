#include <iostream>
using namespace std;

int main() {
    int elapsedTime, hours, minutes, seconds; //elapsed time in seconds

    cout << "Enter elapsed time in seconds: ";
    cin >> elapsedTime;

    hours = elapsedTime / 3600; 
    minutes = (elapsedTime % 3600) / 60; 
    seconds = elapsedTime % 60;

    cout << "Elapsed time: " << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}
