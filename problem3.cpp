#include <iostream>
#include <vector>

#include "mathsutils.h"

/*
Find the largest prime factor of 600851475143
*/

int Problem3(uint64_t input) {
    std::vector<uint64_t> factors = PrimeFactors<uint64_t>(input);

    uint64_t answer = 0;
    for(auto factor : factors)
    {
        answer = std::max(answer, factor);
    }

    return answer;
}