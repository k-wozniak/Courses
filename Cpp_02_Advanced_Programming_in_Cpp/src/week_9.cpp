#include "week_9.h"

#include <iostream>
#include <cmath>
using namespace std;

unsigned int Week9::N_Choose_K(unsigned int n, unsigned int k)
{
    // The solution is n! / (k! * (n-k)!)
    if (k > n)
    {
        throw std::invalid_argument( "K must be <= to N" );
    }

    unsigned int nk = n - k;
    unsigned int fn = 1, fk, fnk;
    for (int i = 1; i <= n; i++)
    {   
        fn *= i;
        if (i == nk)
        {
            fnk = fn;
        }
        if (i == k)
        {
            fk = fn;
        }
    }

    return (fn / (fk * fnk));
}

void Week9::Swap_Values(int &a, int &b)
{
    int temp = a;

    a = b;
    b = temp;
}

void Week9::Return_By_Reference(int number, int &sum_of_digits, int &number_of_digits)
{
    sum_of_digits = 0;
    number_of_digits = 0;

    if (number == 0){
        number_of_digits = 1;
        return; 
    }

    while (number > 0) {
        sum_of_digits += number%10;
        number_of_digits += 1;
        number /= 10;
    }
}

Week9::solution Week9::Quadratic_Solver(double a, double b, double c, double& outX1, double& outX2)
{
    if (a == 0)
    {
        return Linear_Solver(b, c, outX1);
    }

    double delta = b*b - 4*a*c;

    if (delta != 0) {
        outX1 = (-b + sqrt(delta))/(2*a);
        outX2 = (-b - sqrt(delta))/(2*a);
        return Week9::solution::Two_Real_Solution;
    } 
    else if  (delta == 0)
    {
        outX1 = outX2 = -b / (2*a);
        return Week9::solution::One_Real_Solution;
    }
    return Week9::solution::No_Real_Solution;
}

Week9::solution Week9::Linear_Solver(double a, double b, double& outX)
{
    if (a != 0)
    {
        outX = -b/a;
        return Week9::solution::One_Real_Solution;
    }
    else if ((a == 0) && (b == 0))
    {
        outX = 0;
        return Week9::solution::All_Reals;
    }
    else
    {
        return Week9::solution::No_Solution;
    }
}

int Week9::do_something(int x)
{
    return 1;
}

bool Week9::do_something(bool x)
{
    return false;
}

float Week9::do_something(float x)
{
    return 4.444;
}