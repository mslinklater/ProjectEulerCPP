#include <iostream>

// If we list all the natural numbers below that are multiples of or , we get and . The sum of these multiples is.
//
// Find the sum of all the multiples of 1000 or below.

int Problem1(int input)
{
    uint32_t sum = 0;

    for (int i = 0 ; i < input ; i++)
    {
        // If the number is divisible by 3 or 5, add it to the sum
        if (((i % 3) == 0) || ((i % 5) == 0))
        {
            sum += i;
        }
    }

    return sum;
}