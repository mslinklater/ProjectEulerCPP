#include <iostream>
#include <vector>

#include "mathsutils.h"
#include "stringutils.h"

int main(int argc, const char * argv[]) {
    std::cout << "Problem 5 - Least Common Multiple of all the numbers from 1 to 20\n";

    /*
    We use the classic LCM algorithm here...

    get the prime factors of each number... add 
    */

    for(int i = 1 ; i <= 20 ; ++i)
    {
        std::vector<int> factors = PrimeFactors<int>(i);
        std::cout << i << " - " << VectorToString<int>(factors) << "\n";  // to delete


    }

    int answer = 0;

    std::cout << "The answer is " << answer << "\n";
    return 0;
}