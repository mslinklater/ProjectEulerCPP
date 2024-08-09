#include <iostream>

/*

Find the sum of the even Fibonacci numbers less than 4,000,000

*/

int main(int argc, const char * argv[]) {
    std::cout << "Problem 2\n";

    uint64_t prev = 1;
    uint64_t curr = 2;
    uint64_t sum = 2;

    while (curr < 4000000)
    {
        uint64_t next = prev + curr;
        prev = curr;
        curr = next;
        if ((curr % 2) == 0)
        {
            sum += curr;
        }
    }

    std::cout << "The answer is " << sum << "\n";
    return 0;
}