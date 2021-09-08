#include "week_11.h"

#include <iostream>
#include <cmath>
using namespace std;

bool Week11::Is_Prime(unsigned int number)
{
    for(int i = 2; i <= sqrt(number); i++)
    {
        if(number%i == 0)
        {
            return false;
        }
    }

    return true;
}