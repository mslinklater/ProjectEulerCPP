#include <iostream>
#include <vector>

#include "mathsutils.h"

/*
Find the largest prime factor of 600851475143
*/


int Problem4(int input)
{
    int answer = 0;
    for (int x = 0 ; x <= input ; ++x)
    {
        for (int y = 0 ; y <= input ; ++y)
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

    return answer;
}