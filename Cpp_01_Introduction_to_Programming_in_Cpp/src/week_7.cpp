#include "week_7.h"

#include <iostream>
using namespace std;

void Week7::Print_N_Even_Numbers()
{   
    unsigned int number;

    cout << "Please enter the number of even numbers: ";
    cin >> number;

    int n = 2;
    for (int i = 0; i < number; i++)
    {
        cout << n << endl;
        n = n + 2;
    }

    cout << endl;
}

void Week7::Fibonacci()
{
    unsigned int number;
    unsigned long long int storage [3] = {0, 1, 1};
    short int order [3][3] = {
        {2, 0, 1},
        {0, 1, 2},
        {1, 0, 2},
    };

    cout << "Please enter a positive integer greater than 1: ";
    cin >> number;

    if (number <= 1)
    {
        cout << "Learn to read the instructions.";
        return;
    }

    short stage = 0;
    cout << 1 << endl;
    for (int i = 1; i < number; i++)
    {
        storage[order[stage][0]] = storage[order[stage][1]] + storage[order[stage][2]];

        cout << storage[order[stage][0]] << endl;

        stage = (stage >= 2) ? 0 : (stage+1);
    }
}

void Week7::Fibonacci_Double()
{
    unsigned int number;
    long double storage [3] = {0, 1, 1};
    short int order [3][3] = {
        {2, 0, 1},
        {0, 1, 2},
        {1, 0, 2},
    };

    cout << "Please enter a positive integer greater than 1: ";
    cin >> number;

    if (number <= 1)
    {
        cout << "Learn to read the instructions.";
        return;
    }

    short stage = 0;
    cout << 1 << endl;
    for (int i = 1; i < number; i++)
    {
        storage[order[stage][0]] = storage[order[stage][1]] + storage[order[stage][2]];

        cout << storage[order[stage][0]] << endl;

        stage = (stage >= 2) ? 0 : (stage+1);
    }
}