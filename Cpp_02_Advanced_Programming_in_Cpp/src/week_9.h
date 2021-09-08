// week_9.h
#ifndef WEEK_9_H
#define WEEK_9_H

#include <iostream>

class Week9
{
    public:
        static unsigned int N_Choose_K(unsigned int n, unsigned int k);
        static void Swap_Values(int &a, int &b);
        static void Return_By_Reference(int number, int &sum_of_digits, int &number_of_digits);

        enum solution {
            No_Solution = 0,
            One_Real_Solution = 1,
            Two_Real_Solution = 2,
            All_Reals = 3,
            No_Real_Solution = 4,
        };

        /* Quadratic_Solver finds the solution to the equation ax^2+bx+c = 0
        Inputs - coefficients of equation
        Outputs:
            1. Type of the equation (return value)
            2. Output of the solution passed by reference outX1 and outX2
        */
        static solution Quadratic_Solver(double a, double b, double c, double& outX1, double& outX2);

        /* Linear_Solver finds solution to a linear equation in form ax + b = 0
            Input: a, b coefficients of equation
            Output: 1. Type of solutin (return value)
                    2. outX solution to equation (output param)
            Assumptions: If equation has no solutions the value returned at outX is not defined
        */
        static solution Linear_Solver(double a, double b, double& outX);

        /* Example of function overloading */
        static int do_something(int x);
        static bool do_something(bool x);
        static float do_something(float x);
};

#endif