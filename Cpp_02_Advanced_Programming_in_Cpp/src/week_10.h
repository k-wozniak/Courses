// week_10.h
#ifndef WEEK_10_H
#define WEEK_10_H

#include <iostream>

class Week10
{
    public:
        /*
        Write a function for determining if a year is a leap year in the Gregorian calendar.
        The system is to check if it is divisible by 4 but not by 100 unless it is also divisible
        by 400.

        For example, 1896, 1904, and 2000 were leap years but 1900 was not.
        Write a function that takes in a year as input and returns True if the year is a leap
        year, return False otherwise.

        Note: background on leap year https://en.wikipedia.org/wiki/Leap_year

        The name of the function should be isleapyear and the function should take one parameter which is the year to test.  Here is an example call to the function

        int mybirthyear = 2000
        If( isleapyear(mybirthyear))
        {
            printf(“Year %i  was a leap year”, mybirthyear)
        }
        */
       static bool Is_Leap_Year(unsigned short int year);

       /*
        Body mass index (BMI) is a number calculated from  a person’s weight and height.
        According to the Centers for Disease Control and Prevention, the BMI is a fairly
        reliable indicator of body fatness for most people. BMI does not measure body fat
        directly, but research has shown that  BMI correlates to direct  measures  of  body  fat,  
        such  as  underwater  weighing  and dual-energy X-ray absorptiometry. The formula 
        for BMI is Weight/Height2

        Where    weight is in kilograms    and height is in meters.

        The name of the function should be named bmimetricf and the function should take two parameters which are the weight in kilograms and the height in meters to use to calculate the BMI..  Here is an example call to the function

        int weight = 50;
        float height = 1.58;

        printf(“BMI is: %3.2f”, bmimetricf(weight, height)) ;

        The output of the code above would be: BMI is: 20.03
       */

      static double Calculate_BMI(double weight, double height);
};

#endif