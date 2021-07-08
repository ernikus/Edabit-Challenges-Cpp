//Title:        How Edabit Works
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/NyAFty4To88YCFMij
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>

bool execute(bool const test, bool const answer)
{
    std::cout << "Input:\t-none-" << std::endl;
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

    correct += execute(returnTrue(), true);
    testNum++;


    std::cout << "Correctness: " << std::endl;
    std::cout << correct << "/" << testNum << "!";
    std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
