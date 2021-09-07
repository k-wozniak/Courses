#include "week_6.h"

#include <iostream>
using namespace std;

void Week6::Show_Numbers_Until()
{   
    unsigned int number;

    cout << "Please enter the number to iterate to: ";
    cin >> number;

    /* For loop is more readable
    int i = 0;
    while(i <= number)
    {
        cout << i++ << ", ";
    }
    */

   for (int i = 0; i <= number; i++)
   {
       cout << i << ", ";
   }

    cout << endl;
}

void Week6::Sum_Digits()
{   
    unsigned int number;
    unsigned int sum = 0;

    cout << "Please enter the number to iterate to: ";
    cin >> number;

    while (number > 0)
    {
        sum += number%10;
        number = number/10;
    }

    cout << "The sum of the digits in the number is "<< sum << endl;
}

void Week6::Find_Grades_Average()
{   
    unsigned int number_of_grades;
    unsigned int sum = 0;
    unsigned int grade;

    cout << "Please enter the number of grades: ";
    cin >> number_of_grades;

    for (int i = 0; i < number_of_grades; i++)
    {

        cout << "Please enter the next grade: ";
        cin >> grade;
        sum += grade;
    }

    cout << "The average of the grades is " 
         << ((float)sum / (float)number_of_grades) << endl;
}

void Week6::Find_Grades_Average_With_Termination()
{   
    unsigned int number_of_grades = 0;
    unsigned int sum = 0;
    int grade = 0;

    cout << "Please enter the greades (-1 to finish):\n";
    while (grade >= 0)
    {
        cout << "Enter the next grade: ";
        cin >> grade;
        sum += grade;
        number_of_grades++;
    }

    sum -= grade;
    number_of_grades--;

    cout << "The average of the grades is " 
         << ((float)sum / (float)number_of_grades) << endl;
}