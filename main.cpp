// Project Euler
// main entry point

#include <cassert>
#include <iostream>

#include <string>

#include "problems.h"

template<typename T>
void PrintAnswer(int problem, T answer)
{
    std::cout << "The answer to problem " << problem << " is " << answer << std::endl;
}

int main(int argc, const char * argv[]) {

    bool testAll = false;
    int problemNumber = 10;

    // If parameter is provided, use it to select problem to run
    if(argc > 1)
    {
        std::string arg1 = argv[1];
        if(arg1 == "all")
        {
            testAll = true;
        }
        else
        {
            problemNumber = std::stoi(arg1);
        }
    }

    if((problemNumber == 0) || testAll)
    {
        assert(Problem0(5) == 35);
        uint64_t answer = Problem0(525000);
        PrintAnswer(0, answer);
    }
    if((problemNumber == 1) || testAll)
    {
        int answer = Problem1(1000);
        assert(answer == 233168);
        PrintAnswer(1, answer);
    }

    if((problemNumber == 2) || testAll)
    {
        int answer = Problem2(4000000);
        assert(answer == 4613732);
        PrintAnswer(2, answer);
    }

    if((problemNumber == 3) || testAll)
    {
        int answer = Problem3(600851475143);
        assert(answer == 6857);
        PrintAnswer(3, answer);
    }

    if((problemNumber == 4) || testAll)
    {
        int answer = Problem4(999);
        assert(answer == 906609);
        PrintAnswer(4, answer);
    }

    if((problemNumber == 5) || testAll)
    {
        int answer10 = Problem5(10);
        int answer20 = Problem5(20);
        assert(answer10 == 2520);
        assert(answer20 == 232792560);
        PrintAnswer(5, answer20);
    }

    if((problemNumber == 6) || testAll)
    {
        int testanswer = Problem6(10);
        int answer = Problem6(100);
        assert(testanswer == 2640);
        assert(answer == 25164150);
        PrintAnswer(6, answer);
    }

    if((problemNumber == 7) || testAll)
    {
        int testanswer = Problem7(6);
        assert(testanswer == 13);
        int answer = Problem7(10001);
        assert(answer == 104743);
        PrintAnswer(7, answer);
    }

    if((problemNumber == 8) || testAll)
    {
        uint64_t testanswer = Problem8(4);
        assert(testanswer == 5832);
        uint64_t answer = Problem8(13);
        assert(answer == 23514624000);
        PrintAnswer(8, answer);
    }
    if((problemNumber == 10) || testAll)
    {
        uint64_t testanswer = Problem10(10);
        assert(testanswer == 17);
        uint64_t answer = Problem10(2000000);
        assert(answer == 142913828922);
        PrintAnswer(10, answer);
    }
    return 0;
}