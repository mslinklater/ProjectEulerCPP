#include <cassert>
#include <cmath>
#include <iostream>

#include "mathsutils.h"

// Problem 6 - What is the difference between the sum of the squares and the square of the sum
// for the first hundred natural numbers
//
// sum of squares: (1*1)+(2*2)+(3*3)+...(100*100)
// square of sum: pow(2, (1+2+3+...+100))

int Problem6(int val)
{
    // sum of squares

    int sumOfSquares = SumOfSquares<int>(val);

    // square of sum

    int sum = Sum<int>(val);
    int squareOfSum = sum * sum;

    // diff
    return std::abs(squareOfSum - sumOfSquares);
}

#if 0
int main(int argc, const char * argv[]) 
{
    assert(Diff(10) == 2640);
    std::cout << Diff(100) << std::endl;
    return 0;
}
#endif
