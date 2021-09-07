#include "week_5.h"

#include <iostream>
using namespace std;

void Week5::Grade_Student()
{   
    unsigned int grade1, grade2;

    cout << "Please enter 2 grades, separated by a space: ";
    cin >> grade1 >> grade2;

    if (grade1 < 60 && grade2 < 60)
    {
        cout << "Student Failed :(\n";
    }
    else if (grade1 >= 90 && grade2 >= 90)
    {
        cout << "Student Graduated with Honors :)\n";
    }
    else
    {
        cout << "Student Graduated!\n";
    }
}

void Week5::Which_Is_More()
{
    int number [4];
    int result = 0;

    cout << "Please enter 4 positive integers, separated by a space: ";
    cin >> number[0] >> number[1] >> number[2] >> number[3];

    for(int i = 0; i < 4; i++)
    {
        result += (number[i]%2 == 0) ? 1 : -1;
    }

    if (result < 0)
    {
        cout << "More odds.\n";
    }
    else if (result > 0)
    {
        cout << "More evens.\n";
    }
    else
    {
        cout << "Same number of evens and odds.\n";
    }
}

void Week5::Is_A_Leap_Year(unsigned short int year)
{
    bool div_by_4 = !((bool)(year%4));
    bool div_by_100 = !((bool)(year%100));
    bool div_by_400 = !((bool)(year%400));

    if (div_by_400 || (div_by_4 && !div_by_100))
    {
        cout << year << " is a leap year.\n";
    }
    else
    {
        cout << year << " in not a leap year.\n";
    }
}