//Title:        Buggy Code (Part 4)
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/MaJbk3dZfr9a42ps9
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>

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

    correct += execute("Matt", greeting("Matt"), "Hello, Matt!");
    testNum++;

    correct += execute("Helen", greeting("Helen"), "Hello, Helen!");
    testNum++;

    correct += execute("Mubashir", greeting("Mubashir"), "Hello, my Love!");
    testNum++;


    std::cout << "Correctness: " << std::endl;
    std::cout << correct << "/" << testNum << "!";
    std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
