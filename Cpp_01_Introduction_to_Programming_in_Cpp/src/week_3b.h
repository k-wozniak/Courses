// week_3b.h
#ifndef WEEK_3b_H
#define WEEK_3b_H

#include <iostream>

class Week3_b
{
    public:
        /* TASK:
            Write a program that asks the user to enter an amount of money
            in the format of dollars and remaining cents. The program should
            calculate and print the minimum number of coins (quarters, dimes,
            nickels and pennies) that    are equivalent to the given amount.

            For example, an execution should look like  this:
            Please enter the amount of money to convert:

            # of dollars: 2
            # of cents: 37
            The coins are 9 quarters, 1 dimes, 0 nickels and 2 pennies
        */
        enum Coins {
            quarter = 25,
            dime = 10,
            nickel = 5,
            penny = 1,
        };

       void Convert();
       void Print_Output();
       void Get_Coins_From_Console();
       void Full_Request();

    private:
        unsigned int quarters = 0, dimes = 0, nickels = 0, pennies = 0;
        unsigned int dollars = 0, cents = 0;
        void Reset();
};

#endif