#include <cstdint>
/*

Find the sum of the even Fibonacci numbers less than 4,000,000

*/

int Problem2(int input) {
    uint64_t prev = 1;
    uint64_t curr = 2;
    uint64_t sum = 2;

    while (curr < input)
    {
        uint64_t next = prev + curr;
        prev = curr;
        curr = next;
        if ((curr % 2) == 0)
        {
            sum += curr;
        }
    }

    return sum;
}