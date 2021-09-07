#include "week_1.h"

#include <iostream>
using namespace std;

void Week1::Hello_World()
{
    cout<<endl<<"Hello World!"<<endl;
}

void Week1::STD_Sum()
{
    int num1, num2, sum;

    cout<<"Please enter two numbers separated by a space:"<<endl;
    cin>>num1>>num2;

    sum = num1 + num2;

    cout<<num1<<" + "<<num2<<" = "<<sum<<endl;
}