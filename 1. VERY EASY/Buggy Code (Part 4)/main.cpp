//Title:        Buggy Code (Part 4)
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/MaJbk3dZfr9a42ps9
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>

bool execute(std::string const inputData, std::string const test, std::string const answer)
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
