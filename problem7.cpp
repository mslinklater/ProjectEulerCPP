// Problem 7 - what is the 10,001st prime number ?
// Note... 2 is the first one, 13 is the 6th etc

#include <iostream>

#include "mathsutils.h"

int Problem7(int input)
{
    int number = 2;
    int count = 0;
    int lastPrime = 0;

    while(count < input)
    {
        if(PrimeFactors<int>(number).size() == 1)
        {
            lastPrime = number;
            count++;
        }
        number++;
    };

    return lastPrime;
}