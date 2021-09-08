#include "week_10.h"

#include <iostream>
// #include <cmath>
using namespace std;

bool Week10::Is_Leap_Year(unsigned short int year)
{
    bool div_by_4 = !((bool)(year%4));
    bool div_by_100 = !((bool)(year%100));
    bool div_by_400 = !((bool)(year%400));

    if (div_by_400 || (div_by_4 && !div_by_100))
    {
        return true;
    }
    else
    {
        return false;
    }
}

double Week10::Calculate_BMI(double weight, double height)
{
    return weight / (height*height);
}