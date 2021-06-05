//Title:        Buggy Code (Part 2)
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/4n8qdPPrpyA6QC3Yk
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>

bool execute(int const inputData1, int const inputData2, int const test, int const answer)
{
    std::cout << "Input1:\t" << inputData1 << std::endl;
    std::cout << "Input2:\t" << inputData2 << std::endl;
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

    correct += execute(3, 7, maxNum(3, 7), 7);
    testNum++;

    correct += execute(-1, 0, maxNum(-1, 0), 0);
    testNum++;

    correct += execute(1000, 400, maxNum(1000, 400), 1000);
    testNum++;

    correct += execute(-3, -9, maxNum(-3, -9), -3);
    testNum++;

    correct += execute(88, 90, maxNum(88, 90), 90);
    testNum++;


    std::cout << "Correctness: " << std::endl;
    std::cout << correct << "/" << testNum << "!";
    std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
