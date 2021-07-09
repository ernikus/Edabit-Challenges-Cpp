//Title:        Simulate the Game "Rock, Paper, Scissors"
//Difficulty:   Medium
//Source:       https://edabit.com/challenge/MYqnQ3DpPZi9di4iW
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>
#include <vector>

bool execute(const std::string input1, const std::string input2, const std::string output, const std::string answer)
{
    std::cout << "Input1:\t" << input1 << std::endl;
    std::cout << "Input2:\t" << input2 << std::endl;
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

    correct += execute("rock", "paper", rps("rock", "paper"), "Player 2 wins");
    testNum++;

    correct += execute("paper", "rock", rps("paper", "rock"), "Player 1 wins");
    testNum++;

    correct += execute("paper", "scissors", rps("paper", "scissors"), "Player 2 wins");
    testNum++;

    correct += execute("scissors", "scissors", rps("scissors", "scissors"), "TIE");
    testNum++;

    correct += execute("scissors", "paper", rps("scissors", "paper"), "Player 1 wins");
    testNum++;


    std::cout << "Correctness: " << std::endl;
    std::cout << correct << "/" << testNum << "!";
    std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
