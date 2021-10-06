//Title:        Fives and Threes Only
//Difficulty:   Very Hard
//Source:       https://edabit.com/challenge/Fb8p6vyLMsZX7EnKn
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>

bool execute(const int input, const bool output, const bool answer)
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

	correct += execute(14, only5and3(14), true);
	testNum++;

	correct += execute(25, only5and3(25), true);
	testNum++;

	correct += execute(7, only5and3(7), false);
	testNum++;

	correct += execute(2, only5and3(2), false);
	testNum++;

	correct += execute(43, only5and3(43), true);
	testNum++;

	correct += execute(33, only5and3(33), true);
	testNum++;

	correct += execute(51, only5and3(51), false);
	testNum++;

	correct += execute(91, only5and3(91), true);
	testNum++;

	correct += execute(378, only5and3(378), true);
	testNum++;

	correct += execute(627, only5and3(627), true);
	testNum++;

	//BONUS
	correct += execute(81, only5and3(81), true);
	testNum++;


	std::cout << "Correctness: " << std::endl;
	std::cout << correct << "/" << testNum << "!";
	std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
