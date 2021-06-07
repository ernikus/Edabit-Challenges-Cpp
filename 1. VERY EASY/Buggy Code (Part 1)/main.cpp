//Title:        Buggy Code (Part 1)
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/fQp4JGfGhvEY5DTdb
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>

bool execute(int const inputData, int const test, int const answer)
{
    std::cout << "Input:\t" << inputData << std::endl;
    std::cout << "Output:\t" << test << std::endl;
    std::cout << "Answer:\t" << answer << std::endl;

    if (test == answer)
    {
        std::cout << "Correct Answer!" << std::endl << std::endl;
        return true;
    }

    else
    {
        std::cout << "Bad Answer!" << std::endl << std::endl;
        return false;
    }
}

int main()
{
    int correct{ 0 }, testNum{ 0 };

    correct += execute(2, cubes(2), 8);
    testNum++;

    correct += execute(3, cubes(3), 27);
    testNum++;

    correct += execute(4, cubes(4), 64);
    testNum++;

    correct += execute(5, cubes(5), 125);
    testNum++;

    correct += execute(10, cubes(10), 1000);
    testNum++;


    std::cout << "Correctness: " << std::endl;
    std::cout << correct << "/" << testNum << "!";
    std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
