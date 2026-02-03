#include <cstdint>
#include "mathsutils.h"

// TODO: Use the seive method here for better performance

uint64_t Problem10(int input)
{
    uint64_t answer = 0;
    for(int i=2 ; i<input ; ++i)
    {
        if(IsPrime(i))
        {
            answer += i;
        }
    }

    return answer;
}