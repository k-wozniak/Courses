// week_14.h
#ifndef WEEK_14_H
#define WEEK_14_H

#include <iostream>
using namespace std;

class Week14
{
    public:
        // Gets a name as str and returns it back (CRAZZZYYYY)
        static void Name_Printing();

        // Gets a name and revers the order
        static void Reverse_Name_Printing();

        // Gets 3 strings and finds the the fist one
        static string Get_First_Word(string a, string b, string c);

};

#endif