// week_13.h
#ifndef WEEK_13_H
#define WEEK_13_H

#include <iostream>

class Week13
{
    public:
        /* Implement function maxinlst(lst), which returns the maximum value of the elements in the array.
        For example, given an array lst: [-19, -3, 20, -1, 5, -25], the function
        should return 20.
        The name of the method should be maxinlst and the method should take two parameters.
        The first parameter is the array of values to test.
        The second parameter is the number of elements in the array.
        Here is an example call to the function

        int lst[] = {-19, -3, 20, -1, 5, -25};
        printf(“%i”,maxinlst(lst,6)); */
        static int Max_In_List(int list [], int size);

        /*
        Implement function maxabsinlst(lst), which returns the maximum absolute
        value of the elements in the array.
        For example, given a array lst: [-19, -3, 20, -1, 0, -25], the function should return 25.

        The name of the method should be maxabsinlst and the method should take two parameters.
        The first parameter is the array of values to test.
        The second parameter is the number of elements in the array.
        Here is an example call to the function

        int lst[] = {-19, -3, 20, -1, 5, -25};
        printf(“%i”,maxabsinlst(lst,6));
        */
       static int Max_Abs_In_List(int list [], int size);

        /*
        Implement function avgoflst(lst), which returns the average
        value of the elements in the array.
        For example, given a array lst: [19, 2, 20, 1, 0, 18], the function
        should return 10.

        The name of the method should be avgoflst and the method should take two parameters.
        The first parameter is the array of values to test. 
        The second parameter is the number of elements in the array.
        Here is an example call to the function:

        int lst[] = {19, 2, 20, 1, 0, 18};
        printf(“%3.0f”,avgoflst(lst,6));
        */
       static double Avg_Of_List(double arr [], unsigned int size);
};

#endif