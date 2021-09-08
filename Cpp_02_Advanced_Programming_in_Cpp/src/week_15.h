// week_15.h
#ifndef WEEK_15_H
#define WEEK_15_H

#include <iostream>
using namespace std;

class Week15
{
    public:
        /*
        Modify your earlier BMI Metric program to also display the CDC standard weight status categories:
        The CDC standard weight status categories are:

        BMI                 Weight Status
        Below 18.5          Underweight
        18.5-24.9           Normal
        25.0-29.9           Overweight
        30.0 and above      Obese

        For example,  an  execution could look  like  this:
        Please enter weight in kilograms: 50
        Please enter height in meters: 1.58
        BMI is: 20.03, Status is Normal*/
        static void Calculate_BMI(double weight, double height);

        /*
        Write a program that computes how much a customer has to pay after purchasing two items. 

        The price is calculated according to the following rules:
        • Buy one get one half off promotion: the lower price item is half price.
        • If the customer is a club card member, additional 10% off.
        • Tax is added.


        Inputs to the program include:
        • Two items’ prices
        • Have club card or not (User enters ‘Y’ or ‘y’ for “yes”; ‘N’ or ‘n’ for “no”)
        • Tax rate (User enters the percentage as a number; for example, they enter
        8.25 if the tax rate is 8.25%)

        Program displays:
        • Base price - the price before the discounts and taxes
        • Price after discounts - the price after the buy one get one half off promotion
        and the member’s discount, if applicable
        • Total price – the amount of money the customer has to pay (after tax)
        printed with the precision of 2 decimal digits.

        For example, an execution could look like this:

        Enter price of the first item: 10
        Enter price of the second item: 20
        Does customer have a club card? (Y/N): y
        Enter tax rate, e.g. 5.5 for 5.5% tax: 8.25
        Base price = 30.00
        Price after discounts = 22.50
        Total price = 24.36*/
        static void Shop();

        /*
        Write a program that computes the cost of a long-distance call. The cost of the call is
        determined according to the following rate schedule:
        • Any call started between 8:00 A.M. and 6:00 P.M., Monday through Friday, is
        billed at a rate of $0.40 per minute.
        • Any call starting before 8:00 A.M. or after 6:00 P.M., Monday through Friday, is
        charged at a rate of $0.25 per minute.
        • Any call started on a Saturday or Sunday is charged at a rate of $0.15 per
        minute.
        The input will consist of the day of the week, the time the call started, and the length
        of the call in minutes.
        The output will be the cost of the call.

        Notes:
        1. The time is to be input as 4 digit number, representing the time in 24-hour
        notation, so the time 1:30 P.M. is input as 1330
        2. The day of the week will be read as one of the following three character string:
        ‘Mon’, ‘Tue’, ‘Wed’, ‘Thr’, ‘Fri’, ‘Sat’ or ‘Sun’
        3. The number of minutes will be input as a positive integer.

        For example, an execution could look like this:

        Enter the day the call started at: Fri
        Enter the time the call started at (hhmm): 2350
        Enter the duration of the call (in minutes): 22
        This call will cost $5.50
        */
        static void Lond_Distance_Call_Cost();

        /*
        Read from the user a string containing 
        odd number of characters. Your program should: 
        a) Print the middle character. 
        b) Print the string up to but not including the middle character
            (i.e., the first half of the string). 
        c) Print the string from the middle character to the end (not including the 
        middle character). 

        Sample output: 
        Enter an odd length string: Fortune favors the bold
        Middle character: o
        First half: Fortune fav
        Second half: rs the bold
        */
        static void String_Slicing();

        /*
        Write a program that  reads a character (string of  length  1)  from  the 
        user, and classifies it to  one of the following: lower case letter, upper case letter, 
        digit,  or non-alphanumeric character 

        Sample  output (4 different executions):  
        Enter a character: j
        j is  a lower case  letter.
        Enter a character: 7
        7 is  a digit.
        Enter a character: ^
        ^ is  a non-alphanumeric  character.
        Enter a character: C
        C is  an  upper case  letter.
        */
        static void Character_Classification();

        /*
        Write a function that is given a phrase and returns the first word in that phrase.
        For example, given ‘the quick brown fox’, your function should return ‘the’.

        Here is an example call to the function
        cout << Return_First(“the quick brown fox”);
        */
        static std::string Return_First(string str);

        /*
        Write a function that is given a phrase and returns the phrase we get if we take  
        out the first word from the input phrase.
        For example, given ‘the quick brown fox’, your function should return ‘quick brown fox’

        Here is an example call to the function:
        Cout << Remove_Fist(“the quick brown fox”);
        */
        static std::string Remove_Fist(string str);
};

#endif