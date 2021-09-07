// week_3c.h
#ifndef WEEK_3c_H
#define WEEK_3c_H

#include <iostream>

class Week3_c
{
    public:
        /* TASK:
            Body mass index (BMI) is a number calculated from  a person’s weight and height.
            According to the Centers for Disease Control and Prevention, the BMI is a fairly
            reliable indicator of body fatness for most people. BMI does not measure body fat
            directly, but research has shown that  BMI correlates to direct  measures  of  body  fat,  
            such  as  underwater  weighing  and dual-energy X-ray absorptiometry. The formula 
            for BMI is Weight/Height2

            Where weight is in kilograms and height is in meters.
            Add logic for imperial values.

            Write a program that prompts for metric weight and height and outputs the BMI with two decimal places.

            For example,  an  execution could look  like  this:
            Please enter weight in kilograms: 50
            Please enter height in meters: 1.58
            BMI is: 20.03
        */

       void Request_Imperial();
       void Request_Metric();

    private:
        double weight = 0, height = 0, BMI = 0;

        void Get_Params_Metric();
        void Get_Params_Imperial();
        void Calculate_BMI();
        void Display_Results();
};

#endif