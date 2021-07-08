//Title:        Luke, I Am Your ...
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/fZBR6hjwAZhspyTx3
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

    correct += execute("Darth Vader", relationToLuke("Darth Vader"), "Luke, I am your father.");
    testNum++;

    correct += execute("Leia", relationToLuke("Leia"), "Luke, I am your sister.");
    testNum++;

    correct += execute("Han", relationToLuke("Han"), "Luke, I am your brother in law.");
    testNum++;

    correct += execute("R2D2", relationToLuke("R2D2"), "Luke, I am your droid.");
    testNum++;


    std::cout << "Correctness: " << std::endl;
    std::cout << correct << "/" << testNum << "!";
    std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
