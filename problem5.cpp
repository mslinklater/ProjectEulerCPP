#include <iostream>
#include <vector>
#include <map>
#include <cassert>

#include "mathsutils.h"
#include "stringutils.h"

int Problem5(int Max)
{
    std::map<int, int> maxElements;

    for(int i = 1 ; i <= Max ; ++i)
    {
        std::vector<int> factors = PrimeFactors<int>(i);

        auto factorCounts = CountElements<int>(factors);

        // Update the max elements with the prime factors for this number
        for(auto e : factorCounts)
        {
            if(!maxElements.contains(e.first))
            {
                maxElements[e.first] = e.second;
            }
            else
            {
                maxElements[e.first] = std::max(maxElements[e.first], e.second);
            }
        }
    }

    int answer = NumberFromPrimeFactorCounts<int>(maxElements);
    return answer;
}
