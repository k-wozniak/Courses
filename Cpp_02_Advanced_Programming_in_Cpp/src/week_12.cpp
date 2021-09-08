#include "week_12.h"

#include <iostream>
#include <cmath>
using namespace std;

void Week12::Get_Grades_Above_Average()
{
    unsigned int number_of_grades = 0;
    unsigned int sum = 0;
    int grade = 0;

    cout << "Please enter the nuber of grades: ";
    cin >> number_of_grades;

    int grades [number_of_grades] = {0}; // Legal in g++ with extensions
    for (int i = 0; i < number_of_grades; i++)
    {
        cout << "Enter the grade: ";
        cin >> grades[i];
        sum += grades[i];
    }

    double average = ((float)sum / (float)number_of_grades);
    
    cout << "The average of the grades is " << average << endl;
    cout << "Grades above average are: ";
    for (int i = 0; i < number_of_grades; i++)
    {
        if (grades[i] > average)
        {
            cout << grades[i] << ", ";
        }
    }
}