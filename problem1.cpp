#include <iostream>

// If we list all the natural numbers below that are multiples of or , we get and . The sum of these multiples is.
//
// Find the sum of all the multiples of 1000 or below.

int main(int argc, const char * argv[]) {
    std::cout << "Problem 1\n";

    uint32_t sum = 0;

    for (int i = 0 ; i < 1000 ; i++)
    {
        if (((i % 3) == 0) || ((i % 5) == 0))
        {
            sum += i;
        }
    }

    std::cout << "The answer is " << sum << "\n";
    return 0;
}