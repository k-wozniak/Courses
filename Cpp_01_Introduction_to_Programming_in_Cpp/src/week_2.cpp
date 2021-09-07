#include "week_2.h"

#include <iostream>
#include <string>
#include <stdexcept>
#include <cmath>
using namespace std;

#define PI 3.14159265358979323846

void Week2::Data_Types()
{
    /*
        Exercise to show I understand different datatypes, WOW xD
    */

    int myNum = 9;
    float myFloatNum = 8.99f; // Only 4bytes Max 7 decimal digits
    double myDoubleNum = 8.99543544533453; // 8 byts, Max 15 decimal digits
    
    char myLetter = 'A';
    
    bool myBool = false;
    bool myOtherBool = true;
    bool b1 = true, b2 = false; // Onle liner

    string myText = "Hello World";
}

void Week2::Arithmetic_Operators()
{
    /*
        Exercise to show I understand different operators
    */
   
    cout<<"Summation\t 5 + 40 = "<<(5 + 40)<<endl;
    cout<<"Subtraction\t 5 - 32 = "<<(5 - 32)<<endl;
    cout<<"Multiplication\t "<<(77 * 44)<<endl;
    cout<<"Div (int)\t 55 / 33 = "<<int(55 / 33)<<endl;
    cout<<"Div (double)\t 55 / 33 = "<<double(55 / 33)<<endl;
    cout<<"Modulus\t\t 66%5 = "<<(66 % 5)<<endl;
    
    int g = 5;
    cout<<"Increment (g=5)\t ++g = "<<g++<<endl;
    
    int h = 5;
    cout<<"Decrement (h=5)\t --h = "<<--h<<endl;
}

void Week2::Weeks_Days_Traveled(unsigned int days_traveled)
{
    const unsigned int days_in_week = 7;

    unsigned int weeks = days_traveled / days_in_week;
    unsigned int days = days_traveled%days_in_week;

    cout<<"Travel takes "<<weeks<<" weeks and "<<days<<" days.\n";
}

double Week2::Find_Circle_Area(double radius)
{
    if (radius <= 0.00)
    {
        throw std::invalid_argument("Radius of a circle must be larger than 0.");
    }

    double area = PI * (radius * radius);

    cout<<"The area of the circle is: "<<area<<endl;

    return area;
}

void Week2::Type_Casting()
{
    const double number = 6.6666;
    cout<<"Int\t "<<number<<" = "<<(int)number<<endl;
    cout<<"float\t "<<number<<" = "<<(float)number<<endl;
    cout<<"Char\t "<<number<<" = "<<(char)number<<endl;
    cout<<"Bool\t "<<number<<" = "<<(bool)number<<endl;
}

int Week2::Character_To_ASCII(char character)
{
    int value = (int)character;

    cout<<"ASCII value is: "<<value<<endl;

    return value;
}

char Week2::To_Upper_Case(char character)
{   
    const int offset = 32;
    int c = (int)character;
    if (character >= 'A' && character <= 'Z') // Already a capital
    {
        cout<<"No conversion, already upper case: "<<character<<endl;
        return character;
    }

    if(character >= 'a' && character <= 'z')
    {
        cout<<"Conversion: "<<character<<" --> "<<char(character - offset)<<endl;
        return (char)(character - offset);
    }
    
    throw std::invalid_argument("Not a letter.");    
}

void Week2::Display_Truth_Table()
{   
    const bool t = true, f = false;

    cout<<"|\tA\t|\tB\t|\tAND\t|\tOR\t|"<<endl;
    cout<<"|\t"<<t<<"\t|\t"<<t<<"\t|\t"<<(t&&t)<<"\t|\t"<<(t||t)<<"\t|"<<endl;
    cout<<"|\t"<<t<<"\t|\t"<<f<<"\t|\t"<<(t&&f)<<"\t|\t"<<(t||f)<<"\t|"<<endl;
    cout<<"|\t"<<f<<"\t|\t"<<t<<"\t|\t"<<(f&&t)<<"\t|\t"<<(f||t)<<"\t|"<<endl;
    cout<<"|\t"<<f<<"\t|\t"<<f<<"\t|\t"<<(f&&f)<<"\t|\t"<<(f||f)<<"\t|"<<endl;
}