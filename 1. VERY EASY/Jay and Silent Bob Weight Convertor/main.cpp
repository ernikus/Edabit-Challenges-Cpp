//Title:        Jay and Silent Bob Weight Convertor
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/QuuHXmkvrtErDBj88
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>
#include <vector>

bool execute(const std::string input, const std::string output, const std::string answer)
{
    std::cout << "Input:\t" << input << std::endl;
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

    correct += execute("half", jayAndBob("half"), "14 grams");
    testNum++;

    correct += execute("quarter", jayAndBob("quarter"), "7 grams");
    testNum++;

    correct += execute("eighth", jayAndBob("eighth"), "3.5 grams");
    testNum++;

    correct += execute("sixteenth", jayAndBob("sixteenth"), "1.75 grams");
    testNum++;


    std::cout << "Correctness: " << std::endl;
    std::cout << correct << "/" << testNum << "!";
    std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
