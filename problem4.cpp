#include <iostream>
#include <vector>

#include "mathsutils.h"

/*
Find the largest prime factor of 600851475143
*/


int main(int argc, const char * argv[]) {
    std::cout << "Problem 4 - Largest palindrome from product of 2 3 digit numbers\n";

    int answer = 0;
    for (int x = 0 ; x < 1000 ; ++x)
    {
        for (int y = 0 ; y < 1000 ; ++y)
        {
            int num = x * y;
            if(num > answer)
            {
                if(IsPalindrome<int>(num))
                {
                    answer = num;
                }
            }
        }
    }

    std::cout << "The answer is " << answer << "\n";
    return 0;
}