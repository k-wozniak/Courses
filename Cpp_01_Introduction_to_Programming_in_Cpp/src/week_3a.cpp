#include "week_3a.h"

#include <iostream>
using namespace std;

void Week3_a::Add_Coins(Week3_a::Coins coin_type, unsigned int ammount)
{
    switch (coin_type)
    {
        case Week3_a::Coins::quarter:
            quarters += ammount;
            break;

        case Week3_a::Coins::dime:
            dimes += ammount;
            break;

        case Week3_a::Coins::nickel:
            nickels += ammount;
            break;

        case Week3_a::Coins::penny:
            pennies += ammount;
            break;
    }
}

void Week3_a::Print_Total_In_Dollars()
{   
    const unsigned int cents_in_dollar = 100;

    unsigned int total_cents = 
        (quarters * (int)Week3_a::Coins::quarter) + 
        (dimes * (int)Week3_a::Coins::dime) + 
        (nickels * (int)Week3_a::Coins::nickel) + 
        (pennies * (int)Week3_a::Coins::penny);

    cout<<"Total ammount is "<<total_cents/cents_in_dollar
        <<" dollars and "<<total_cents%cents_in_dollar<<" cents.\n";
}

void Week3_a::Get_Coins_From_Console()
{
    unsigned int number;

    cout<<"Please enter the number of coins:";
    
    cout<<"\n# of quarters: ";
    cin >> number;
    Add_Coins(Week3_a::Coins::quarter, number);

    cout<<"\n# of dimes: ";
    cin >> number;
    Add_Coins(Week3_a::Coins::dime, number);

    cout<<"\n# of nickels: ";
    cin >> number;
    Add_Coins(Week3_a::Coins::nickel, number);

    cout<<"\n# of pennies: ";
    cin >> number;
    Add_Coins(Week3_a::Coins::penny, number);    
}

void Week3_a::Full_Request()
{
    Get_Coins_From_Console();
    Print_Total_In_Dollars();
}