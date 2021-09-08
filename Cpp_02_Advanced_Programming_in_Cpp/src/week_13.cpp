#include "week_13.h"

#include <iostream>
#include <stdlib.h>
using namespace std;

int Week13::Max_In_List(int list [], int size)
{
    if (size < 1){
        throw std::invalid_argument( "Array Must Have Min Size of 1." );
    }

    int max_val = list[0];
    for(int i = 1; i < size; i++)
    {
        max_val = (max_val < list[i]) ? list[i] : max_val;
    }

    return max_val;
}

int Week13::Max_Abs_In_List(int list [], int size)
{
    if (size < 1){
        throw std::invalid_argument( "Array Must Have Min Size of 1." );
    }

    int max_val = list[0];
    for(int i = 1; i < size; i++)
    {
        max_val = (max_val < abs(list[i])) ? abs(list[i]) : max_val;
    }

    return max_val;
}

double Week13::Avg_Of_List(double arr [], unsigned int size)
{
    long double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return double(sum/size);
}