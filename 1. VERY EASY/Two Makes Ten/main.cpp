//Title:        Two Makes Ten
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/jweDwK44Yyow8gXJs
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

    correct += execute(9, 10, makesTen(9, 10), true);
    testNum++;

    correct += execute(9, 9, makesTen(9, 9), false);
    testNum++;

    correct += execute(1, 9, makesTen(1, 9), true);
    testNum++;

    correct += execute(10, 1, makesTen(10, 1), true);
    testNum++;

    correct += execute(10, 10, makesTen(10, 10), true);
    testNum++;

    correct += execute(8, 2, makesTen(8, 2), true);
    testNum++;

    correct += execute(8, 3, makesTen(8, 3), false);
    testNum++;

    correct += execute(10, 42, makesTen(10, 42), true);
    testNum++;

    correct += execute(12, -2, makesTen(12, -2), true);
    testNum++;


    std::cout << "Correctness: " << std::endl;
    std::cout << correct << "/" << testNum << "!";
    std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
