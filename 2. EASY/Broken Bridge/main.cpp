//Title:        Broken Bridge
//Difficulty:   Easy
//Source:       https://edabit.com/challenge/udrQ2ckXP9cXNXiSk
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>

bool execute(const std::string input, const bool output, const bool answer)
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
