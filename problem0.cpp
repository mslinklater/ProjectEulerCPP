#include <iostream>

// If we list all the natural numbers below that are multiples of or , we get and . The sum of these multiples is.
//
// Find the sum of all the multiples of 1000 or below.

uint64_t Problem0(int input)
{
    uint64_t sum = 0;

    for(uint64_t i = 1 ; i <= (input+1)/2 ; i++)  // Odd numbers only
    {
        uint64_t num = 2 * i - 1;
        uint64_t square = num * num;
        sum += square;
        // now check against the sum equation

        uint64_t eq = i*(4*i*i - 1)/3;
        if (sum != eq)
        {
            std::cout << "Mismatch at i=" << i << ": sum=" << sum << " eq=" << eq << std::endl;
        }   
    }
    return sum;
}
