//Title:        Basketball Points
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/xiFyGg3F2FNKQtN8N
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>

bool execute(const int input1, const int input2, const bool output, const bool answer)
{
    std::cout << "Input1:\t" << input1 << std::endl;
    std::cout << "Input2:\t" << input2 << std::endl;
    std::cout << "Output:\t" << output << std::endl;
    std::cout << "Answer:\t" << answer << std::endl;

    if (output == answer)
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
    
    correct += execute(1, 1, points(1, 1), 5);
    testNum++;

    correct += execute(7, 5, points(7, 5), 29);
    testNum++;

    correct += execute(38, 8, points(38, 8), 100);
    testNum++;

    correct += execute(2, 2, points(2, 2), 10);
    testNum++;

    correct += execute(69, 420, points(69, 420), 1398);
    testNum++;


    std::cout << "Correctness: " << std::endl;
    std::cout << correct << "/" << testNum << "!";
    std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}

