#include <iostream>
using namespace std;

int main() {
    double score1, score2, score3, score4, score5, avgTestScore;

    cout << "Enter five test scores: ";
    cin >> score1 >> score2 >> score3 >> score4 >> score5;

    avgTestScore = (score1 + score2 + score3 + score4 + score5) / 5;
    
    cout << "Average test score = " << avgTestScore;

    return 0;
}