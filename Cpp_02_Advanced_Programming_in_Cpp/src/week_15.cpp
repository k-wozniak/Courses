#include "week_15.h"

#include <iostream>
using namespace std;

void Week15::Calculate_BMI(double weight, double height)
{
    double bmi = weight / (height*height);

    string weight_status;
    if (bmi < 18.5)
    {
        weight_status = "Underweight";
    }
    else if (bmi < 25)
    {
        weight_status = "Normal";
    }
    else if (bmi < 30)
    {
        weight_status = "Overweight";
    }
    else
    {
        weight_status = "Obese";
    }

    cout << "Your BMI is: " << bmi << ", Status is: " << weight_status << endl;
}

void Week15::Shop()
{
    double item1, item2, tax;
    char club_card;

    cout << "Enter price of the first item: ";
    cin >> item1;
    cout << "Enter price of the second item: ";
    cin >> item2;
    cout << "Does customer have a club card? (Y/N): ";
    cin >> club_card;
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin >> tax;

    double base_price = item1 + item2;
    
    double after_discounts = (item1 < item2) ? 
        ((0.5 * item1) + item2) :
        (item2 + (0.5 * item2));
    
    after_discounts = (club_card == 'Y' || club_card == 'y') ?
        after_discounts*0.9 : after_discounts;

    double total = after_discounts * (1 + tax/100);

    printf("\nBase price = %.2f", base_price);
    printf("\nPrice after discounts = %.2f", after_discounts);
    printf("\nTotal price = %.2f\n", total);
}

double Get_Tarrif(string day, bool is_high);
void Week15::Lond_Distance_Call_Cost()
{
    string day;
    int time, duration;

    cout << "Enter the day the call started at: ";
    cin >> day;
    cout << "Enter the time the call started at (hhmm): ";
    cin >> time;
    cout << "Enter the duration of the call (in minutes): ";
    cin >> duration;

    bool is_high = (time >= 800 && time <= 1800);
    double tarrif = Get_Tarrif(day, is_high);

    printf("This call will cost $%.2f\n", duration * tarrif);
}

double Get_Tarrif(string day, bool is_high)
{
    if(day == "Sat" || day == "Sun")
    {
        return 0.15;
    }
    else if (is_high)
    {
        return 0.40;
    }
    else
    {
        return 0.25;
    }
}

void Week15::String_Slicing()
{
    string str;
    cout << "Enter an odd length string: ";
    getline(cin, str);

    if (str.length()%2 == 0 || str.length() < 3)
    {
        cout << "Such simple instruction and yet you couldn't do it :(. ABORT";
        return;
    }

    char middle_char = str[(int)(str.length()/2)];
    string low = str.substr(0, (int)(str.length()/2));
    string high = str.substr((int)(str.length()/2)+1, (int)(str.length()/2));

    cout << "Middle character: " << middle_char << endl
         << "First half: " << low << endl
         << "Second half: " << high << endl;
}

void Week15::Character_Classification()
{
    char c;
    cout << "Enter a character: ";
    cin >> c;

    string s;
    if (c >= 'a' && c <= 'z')
    {
        s = " is a lower case letter.";
    }
    else if (c >= 'A' && c <= 'Z')
    {
        s = " an upper case letter.";
    }
    else if (c >= '0' && c <= '9')
    {
        s = " is a digit.";
    }
    else
    {
        s = " is a non-alphanumeric character.";
    }

    cout << c << s << endl;
}

string Week15::Return_First(string str)
{
    size_t found = str.find(' ');
    return str.substr(0, found);
}

string Week15::Remove_Fist(string str)
{
    size_t found = str.find(' ');
    return str.substr(found + 1, (str.length() - found - 1));
}