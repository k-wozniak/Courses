#include "week_14.h"

#include <iostream>
using namespace std;

void Week14::Name_Printing()
{
    string name_and_surname;

    printf("Please enter your name: ");
    getline(cin, name_and_surname);
    printf("Your name is: %s \n", name_and_surname.c_str());
}

void Week14::Reverse_Name_Printing()
{
    string name_and_surname;

    printf("Please enter your name: ");
    getline(cin, name_and_surname);

    for (int i = name_and_surname.length()-1; i >= 0; i--)
    {
        cout << name_and_surname[i];
    }

    cout << endl;
}

string Week14::Get_First_Word(string a, string b, string c)
{
    bool a_larger_than_b = a >= b;
    bool a_larger_than_c = a >= c;
    bool b_larger_than_c = a >= b;

    if(a_larger_than_b && a_larger_than_c)
    {
        return a;
    }
    else if (b_larger_than_c)
    {
        return b;
    }
    else
    {
        return c;
    }
}