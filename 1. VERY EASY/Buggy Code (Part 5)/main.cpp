//Title:        Buggy Code (Part 5)
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/xrxtu8H8pGig8FLLX
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>
#include <vector>

bool execute(const int input, const std::vector<int> output, const std::vector<int> answer)
{
    std::cout << "Input:\t" << input << std::endl;


    std::cout << "Output:\t";

    for(int i=0; i<output.size(); i++)
         std::cout << output[i] << " ";

    std::cout << std::endl;


    std::cout << "Answer:\t";

    for (int i = 0; i < answer.size(); i++)
        std::cout << answer[i] << " ";

    std::cout << std::endl;


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

    correct += execute(1, printArray(1), { 1 });
    testNum++;

    correct += execute(2, printArray(2), { 1, 2 });
    testNum++;

    correct += execute(3, printArray(3), { 1, 2, 3 });
    testNum++;

    correct += execute(4, printArray(4), { 1, 2, 3, 4 });
    testNum++;

    correct += execute(5, printArray(5), { 1, 2, 3, 4, 5 });
    testNum++;

    correct += execute(6, printArray(6), { 1, 2, 3, 4, 5, 6 });
    testNum++;

    correct += execute(7, printArray(7), { 1, 2, 3, 4, 5, 6, 7 });
    testNum++;

    correct += execute(8, printArray(8), { 1, 2, 3, 4, 5, 6, 7, 8 });
    testNum++;

    correct += execute(9, printArray(9), { 1, 2, 3, 4, 5, 6, 7, 8, 9 });
    testNum++;

    correct += execute(10, printArray(10), { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 });
    testNum++;


    std::cout << "Correctness: " << std::endl;
    std::cout << correct << "/" << testNum << "!";
    std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
