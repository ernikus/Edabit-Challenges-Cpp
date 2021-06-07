//Title:        Buggy Code
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/9p6Lfwu8tYazvaHGe
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>

bool execute(int const inputData, std::string const test, std::string const answer)
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

    correct += execute(true, has_bugs(true), "sad days");
    testNum++;

    correct += execute(true, has_bugs(false), "it's a good day");
    testNum++;


    std::cout << "Correctness: " << std::endl;
    std::cout << correct << "/" << testNum << "!";
    std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
