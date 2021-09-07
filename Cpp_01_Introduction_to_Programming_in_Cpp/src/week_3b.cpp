#include "week_3b.h"

#include <iostream>
using namespace std;

void Week3_b::Convert()
{
    unsigned int total = 100*dollars + cents;

    quarters = total/(int)Week3_b::Coins::quarter;
    total -= quarters * Week3_b::Coins::quarter;

    dimes = total/(int)Week3_b::Coins::dime;
    total -= dimes * Week3_b::Coins::dime;

    nickels = total/(int)Week3_b::Coins::nickel;
    total -= nickels * Week3_b::Coins::nickel;

    pennies = total;
}

void Week3_b::Print_Output()
{
    cout << "The coins are "
         << quarters << " quarters, "
         << dimes << " dimes, "
         << nickels << " nickels and "
         << pennies << " pennies.";
}

void Week3_b::Get_Coins_From_Console()
{
    cout << "Please enter the amount of money to convert:\n";
    cout << "# of dollars: ";
    cin >> dollars;
    cout << "# of cents: ";
    cin >> cents;
}

void Week3_b::Full_Request()
{
    Reset();
    Get_Coins_From_Console();
    Convert();
    Print_Output();
}

void Week3_b::Reset()
{
    quarters = 0;
    dimes = 0;
    nickels = 0;
    pennies = 0;
}