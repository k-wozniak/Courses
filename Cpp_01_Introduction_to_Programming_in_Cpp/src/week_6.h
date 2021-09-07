// week_6.h
#ifndef WEEK_6_H
#define WEEK_6_H

#include <iostream>

class Week6
{
    public:
        /* Print numbers until and including the number inserted (only positives) */
        static void Show_Numbers_Until();

        /* Prints the sum of the digits in the number */
        static void Sum_Digits();

        /* Find average of the grades in the class */
        static void Find_Grades_Average();

        /* Reads a sequence of grades (till -1 is entered) and find average */
        static void Find_Grades_Average_With_Termination();
};

#endif