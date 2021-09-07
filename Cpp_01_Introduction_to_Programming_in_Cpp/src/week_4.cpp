#include "week_4.h"

#include <iostream>
using namespace std;

double Week4::Absolute_Value(double x)
{
    return x < 0 ? -x : x;
}

void Week4::Classify_Character(char c)
{
    string value = "a not alpha-numeric character";

    if (c >= '0' && c <= '9')
    {
        value = "a digit";
    }
    else if (c >= 'A' && c <= 'Z')
    {
        value = "an upper case letter";
    }
    else if (c >= 'a' && c <= 'z')
    {
        value = "a lower case letter";
    }

    cout << "The character is " << value << endl;
}

void Week4::Show_12h_Format(unsigned int time_h)
{
    if (time_h == 0 || time_h == 24)
    {
        cout << "Time 12am\n";
    }
    else if (time_h < 12)
    {
        cout << "Time " << time_h << "am\n";
    }
    else if (time_h == 12)
    {
        cout << "Time 12pm\n";
    }
    else if (time_h < 24)
    {
        cout << "Time " << (time_h - 12) << "pm\n";
    }
    else
    {
        cout << "Wrong input time.\n";
    }
}

void Week4::Operation(double a, double b, char operation)
{
    double result;

    switch (operation)
    {
        case '+':
            result = a + b;
            break;

        case '-':
            result = a - b;
            break;

        case '*':
            result = a *b;
            break;

        case '/':
            result = a / b;
            break;
        
        default:
            cout << "Not supported operation " << operation << " Try: +,-,*,/\n";
            return;
    }

    cout << "Result of the operation = " << result << endl;
}