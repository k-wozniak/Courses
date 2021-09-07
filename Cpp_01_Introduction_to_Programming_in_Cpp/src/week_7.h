// week_7.h
#ifndef WEEK_7_H
#define WEEK_7_H

#include <iostream>

class Week7
{
    public:
        /* Write a program that reads a positive integer n, and prints the first n even numbers.

        For example, one execution would look like this:
        Please enter a positive integer: 3
        2
        4
        6
        */
       static void Print_N_Even_Numbers();

       /* Fibonacci number is a series of numbers in which each number is the sum of the two preceding numbers. The first two numbers in the series are the number 1.  Write a program to print first n Fibonacci Numbers

        For example, one execution would look like this:
        Please enter a positive integer greater than 1: 4
        1
        1
        2
        3 */
        static void Fibonacci();
        static void Fibonacci_Double(); // Uses Long Double for number storage and is super fast!
};

#endif