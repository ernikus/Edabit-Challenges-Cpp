//Title:        Is the Array Empty?
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/2w79wMaSF7Wiyebgc
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>
#include <vector>

bool execute(const std::vector<int> input, bool const output, bool const answer)
{
    std::cout << "Input:\t-none-" << std::endl;
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

    correct += execute({}, isEmpty({}), true);
    testNum++;

    correct += execute({1, 2, 3}, isEmpty({ 1, 2, 3 }), false);
    testNum++;


    std::cout << "Correctness: " << std::endl;
    std::cout << correct << "/" << testNum << "!";
    std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
