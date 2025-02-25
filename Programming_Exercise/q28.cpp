#include <iostream>
using namespace std;

int main() {
    double caloriesPerPoundNuts, caloriesPerStudent;
    double caloriesPerPoundFruit, totalCalories, totalWeight, weightNuts, weightFruit;
    int students;

    cout << "Enter the number of calories in each pound of nuts: ";
    cin >> caloriesPerPoundNuts;
    cout << "Enter the  number of students in the elementary school: ";
    cin >> students;
    cout << "Enter the number of calories required for each student from the mixture: ";
    cin >> caloriesPerStudent;

    caloriesPerPoundFruit = caloriesPerPoundNuts / 0.70;

    totalCalories = students * caloriesPerStudent;

    totalWeight = totalCalories / (caloriesPerPoundNuts + caloriesPerPoundFruit);

    weightNuts = totalWeight / 2;
    weightFruit = totalWeight / 2;

    cout << "Amount of nuts needed: " << weightNuts << " pounds" << endl;
    cout << "Amount of dried fruit needed: " << weightFruit << " pounds" << endl;
    
    return 0;
}