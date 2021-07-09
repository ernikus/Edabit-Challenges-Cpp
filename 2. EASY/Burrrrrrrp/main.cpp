//Title:        Burrrrrrrp
//Difficulty:   Easy
//Source:       https://edabit.com/challenge/vxpP4nnDhRr2Yc3Lo
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>

bool execute(const int input, const std::string output, const std::string answer)
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

    correct += execute(3, longBurp(3), "Burrrp");
    testNum++;

    correct += execute(9, longBurp(9), "Burrrrrrrrrp");
    testNum++;

    correct += execute(10, longBurp(10), "Burrrrrrrrrrp");
    testNum++;

    correct += execute(13, longBurp(13), "Burrrrrrrrrrrrrp");
    testNum++;

    correct += execute(18, longBurp(18), "Burrrrrrrrrrrrrrrrrrp");
    testNum++;

    correct += execute(1, longBurp(1), "Burp");
    testNum++;


    std::cout << "Correctness: " << std::endl;
    std::cout << correct << "/" << testNum << "!";
    std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}