#include <iostream>

#include "week_9.h"
#include "week_10.h"
#include "week_12.h"

using namespace std;

int main()
{
    // **************************************************************
    // Week 9
    // **************************************************************

    //cout << "5 choose 3 gives " << Week9::N_Choose_K(5, 3) << endl;
    
    /*
    int a = 5, b = 3;
    Week9::Swap_Values(a, b);
    cout << "A was 5 is: " << a << " B was 3 is: " << b << endl;
    */

    /*
    int number = 11125, num_of_digits, sum_of_digits;
    Week9::Return_By_Reference(number, sum_of_digits, num_of_digits);
    cout << "For number: " << number
        << " the sum of Digits is: "<< sum_of_digits 
        << " the number of digits is: " << num_of_digits << endl;
    */

    /*
    cout << "int Do_Something returns " << Week9::do_something(1) << endl;
    cout << "bool Do_Something returns " << Week9::do_something(true) << endl;
    cout << "float Do_Something returns " << Week9::do_something(1.1f) << endl;
    */

    // **************************************************************
    // Week 10
    // **************************************************************

    // int mybirthyear = 2000;
    // if (Week10::Is_Leap_Year(mybirthyear))
    // {
    //   printf("Year %i was a leap year.\n", mybirthyear);
    // }

    // double weigth = 50.0, height = 1.58;
    // printf("BMI is: %3.2f \n", Week10::Calculate_BMI(weigth, height));

    // **************************************************************
    // Week 12
    // **************************************************************
    Week12::Get_Grades_Above_Average();
    
    return 0;
}