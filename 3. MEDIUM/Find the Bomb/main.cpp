//Title:        Find the Bomb
//Difficulty:   Medium
//Source:       https://edabit.com/challenge/FbgicbJyLQan2pbde
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
    
    correct += execute("There is a bomb.", bomb("There is a bomb."), "Duck!!!");
    testNum++;

    correct += execute("Hey, did you find it?", bomb("Hey, did you find it?"), "There is no bomb, relax.");
    testNum++;

    correct += execute("Hey, did you think there is a bomb?", bomb("Hey, did you think there is a bomb?"), "Duck!!!");
    testNum++;

    correct += execute("This goes boom!!!", bomb("This goes boom!!!"), "There is no bomb, relax.");
    testNum++;

    correct += execute("Hey, did you find the BoMb?", bomb("Hey, did you find the BoMb?"), "Duck!!!");
    testNum++;
    

    std::cout << "Correctness: " << std::endl;
    std::cout << correct << "/" << testNum << "!";
    std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}

