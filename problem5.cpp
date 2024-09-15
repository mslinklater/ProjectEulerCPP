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

int main(int argc, const char * argv[]) {
    std::cout << "Problem 5 - Least Common Multiple of all the numbers from 1 to 20\n";

    /*
    We use the classic LCM algorithm here...

    get the prime factors of each number... add 
    */

    int answer10 = Problem5(10);
    int answer20 = Problem5(20);

    assert(answer10 == 2520);
    assert(answer20 == 232792560);

    std::cout << "The answer is " << answer20 << "\n";

    return 0;
}