#include <iostream>
#include <vector>

#include "mathsutils.h"

/*
Find the largest prime factor of 600851475143
*/

int main(int argc, const char * argv[]) {
    std::cout << "Problem 3 - Largest Prime Factor\n";

    std::vector<uint64_t> factors = PrimeFactors<uint64_t>(600851475143);

    uint64_t answer = 0;
    for(auto factor : factors)
    {
        answer = std::max(answer, factor);
    }

    std::cout << "The answer is " << answer << "\n";
    return 0;
}