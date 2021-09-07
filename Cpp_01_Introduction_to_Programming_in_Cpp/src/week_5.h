// week_5.h
#ifndef WEEK_5_H
#define WEEK_5_H

#include <iostream>

class Week5
{
    public:
        /* Write a program that inputs two grades separated by a space.  

        1. If both grades are below a score of sixty then the program should output the message: Student Failed:(
        2. If both grades are greater than or equal to ninety five then the program should output the message: Student Graduated with Honors:)
        3. Otherwise the program should output the message: Student Graduated!

        For example, an execution could look like this:

        Please enter 2 grades, separated by a space: 59 95
        Student Graduated! */
        static void Grade_Student();

        /* Write a program that inputs four numbers separated by spaces.
        The program should count how many odd and even numbers there are.
        The program should then output one of three possibilities depending on
        how many even and odd numbers are entered:

        1. more evens
        2. more odds
        3. same number of evens and odds

        For example, an execution could look like this:

        Please enter 4 positive integers, separated by a space: 2 3 5 7
        more odds*/
        static void Which_Is_More();

        /* Write a program for determining if a year is a leap year. In the Gregorian calendar
        system you can check if it is a leaper if it is divisible by 4 but not by 100 unless 
        it is also divisible by 400.

        For example, 1896, 1904, and 2000 were leap years but 1900 was not.
        Write a function that takes in a year as input and prints the string
        "{year} was a leap year'' if true and "{year} was not a leap year'' if false.
        Note: background on leap year https://en.wikipedia.org/wiki/Leap_year

        output: 1896 was a leap year
        output: 1897 was not a leap year */

        static void Is_A_Leap_Year(unsigned short int year);
};

#endif