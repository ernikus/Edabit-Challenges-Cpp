//Title:        Broken Bridge
//Difficulty:   Easy
//Source:       https://edabit.com/challenge/udrQ2ckXP9cXNXiSk
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>

bool execute(std::string const inputData, bool const test, bool const answer)
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

    correct += execute("####", isSafeBridge("####"), true);
    testNum++;

    correct += execute("## ####", isSafeBridge("## ####"), false);
    testNum++;

    correct += execute("#", isSafeBridge("#"), true);
    testNum++;

    correct += execute("# #", isSafeBridge("# #"), false);
    testNum++;


    std::cout << "Correctness: " << std::endl;
    std::cout << correct << "/" << testNum << "!";
    std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
