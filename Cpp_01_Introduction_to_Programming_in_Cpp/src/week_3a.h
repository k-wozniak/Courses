// week_2.h
#ifndef WEEK_3a_H
#define WEEK_3a_H

#include <iostream>

class Week3_a
{
    public:
        /* TASK:
            Write a program that asks the user to enter a number of quarters,
            dimes, nickels and pennies and then outputs the monetary value of
            the coins in the format of dollars and remaining cents.
            Your program should interact with the user exactly as it shows in
            the following example:

            Please enter the number of coins:
            # of quarters: 20
            # of dimes: 4
            # of nickels: 13
            # of pennies: 17
            The total is 6 dollars and 22 cents
        */
        enum Coins {
            quarter = 25,
            dime = 10,
            nickel = 5,
            penny = 1,
        };

       void Add_Coins(Coins coin_type, unsigned int ammount);
       void Print_Total_In_Dollars();
       void Get_Coins_From_Console();
       void Full_Request();

    private:
        unsigned int quarters = 0, dimes = 0, nickels = 0, pennies = 0;
};

#endif