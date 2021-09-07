#include "week_3c.h"

#include <iomanip>
#include <iostream>
using namespace std;

void Week3_c::Get_Params_Metric()
{
    cout << "Please enter weight in kilograms: ";
    cin >> weight;
    cout << "Please enter height in meters: ";
    cin >> height;
}

void Week3_c::Get_Params_Imperial()
{
    double weight_i, height_i;

    cout << "Please enter weight in pounds: ";
    cin >> weight_i;
    cout << "Please enter height in inches: ";
    cin >> height_i;

    weight = weight_i * 0.453592;
    height = height_i * 0.0254;
}

void Week3_c::Calculate_BMI()
{
    BMI = weight / (height*height);
}

void Week3_c::Display_Results()
{
    cout << "BMI is: " << std::setprecision(2) << std::fixed << BMI << endl;
}

void Week3_c::Request_Metric()
{
    Get_Params_Metric();
    Calculate_BMI();
    Display_Results();
}

void Week3_c::Request_Imperial()
{
    Get_Params_Imperial();
    Calculate_BMI();
    Display_Results();
}