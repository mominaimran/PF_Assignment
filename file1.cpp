#include <iostream>
using namespace std;

int main()
{
    double marks, sum, percentage, GPA;
    int subjects, semesters, totalMarks;
    char response;
    sum = 0;

    cout << "How many subjects do you have? ";
    cin >> subjects;
    totalMarks = subjects * 100;

    for (int i = 1; i <= subjects; i++)
    {
        cout << "Enter obtained marks in subject " << i << ": ";
        cin >> marks;
        sum += marks;
    }

    percentage = sum / totalMarks * 100;
    cout << "Total marks obtained out of " << totalMarks << " = " << sum << endl;
    cout << "Percentage = " << percentage << "%" << endl;
    cout << "Average = " << sum / subjects << endl;

    if (percentage >= 85)
        GPA = 4.0;
    else if (percentage >= 80)
        GPA = 3.7;
    else if (percentage >= 75)
        GPA = 3.3;
    else if (percentage >= 70)
        GPA = 3.0;
    else if (percentage >= 60)
        GPA = 2.0;
    else
        GPA = 1.0;

    cout << "GPA = " << GPA << endl;

    cout << "Do you want to calculate CGPA?(Y/N) ";
    cin >> response;

    double semestersGPA, sumOfGPAs = GPA;
    if (response == 'y' || response == 'Y')
    {
        cout << "How many semesters do you have completed: ";
        cin >> semesters;

        for (int i = 2; i <= semesters; i++)
        {
            cout << "Enter GPA for semester " << i << ": ";
            cin >> semestersGPA;
            sumOfGPAs += semestersGPA;
        }
        cout << "CGPA = " << sumOfGPAs / semesters << endl;
    }

    return 0;
}