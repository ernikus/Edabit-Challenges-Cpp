//Title:        Buggy Code (Part 7)
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/cXwstTcnD56XqSKgC
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>
#include <utility>

bool execute(int const inputData1, int const inputData2, std::pair<int, int> const test, std::pair<int, int> const answer)
{
    std::cout << "Input1:\t" << inputData1 << std::endl;
    std::cout << "Input2:\t" << inputData2 << std::endl;
    std::cout << "Output:\t" << test.first  << ", " << test.second << std::endl;
    std::cout << "Answer:\t" << test.first << ", " << test.second << std::endl;

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

    correct += execute(100, 200, swap(100, 200), std::make_pair(200, 100));
    testNum++;

    correct += execute(44, 33, swap(44, 33), std::make_pair(33, 44));
    testNum++;

    correct += execute(21, 12, swap(21, 12), std::make_pair(12, 21));
    testNum++;

    correct += execute(10, 20, swap(10, 20), std::make_pair(20, 10));
    testNum++;


    std::cout << "Correctness: " << std::endl;
    std::cout << correct << "/" << testNum << "!";
    std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
