//Title:        First Class, Second Class and Third Class Levers
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/qJdJ7g9akxfEiKAM6
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>
#include <vector>

bool execute(const std::vector<char> input, const std::string output, const std::string answer)
{
    std::cout << "Input:\t";
    for (int i = 0; i < input.size(); ++i)
    {
        std::cout << input[i] << " ";
    }
    
    std::cout << std::endl;
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

    correct += execute({ 'e', 'f', 'l' }, determineLever({ 'e', 'f', 'l' }), "first class lever");
    testNum++;

    correct += execute({ 'e', 'l', 'f' }, determineLever({ 'e', 'l', 'f' }), "second class lever");
    testNum++;

    correct += execute({ 'f', 'e', 'l' }, determineLever({ 'f', 'e', 'l' }), "third class lever");
    testNum++;


    std::cout << "Correctness: " << std::endl;
    std::cout << correct << "/" << testNum << "!";
    std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
