//Title:        Among Us Imposter Formula
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/HycqNJ8BwcYbxmaXu
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>

bool execute(const int input1, const int input2, const std::string output, const std::string answer)
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

	correct += execute(1, 9, imposterFormula(1, 9), "11%");
	testNum++;

	correct += execute(2, 10, imposterFormula(2, 10), "20%");
	testNum++;

	correct += execute(3, 7, imposterFormula(3, 7), "43%");
	testNum++;


	std::cout << "Correctness: " << std::endl;
	std::cout << correct << "/" << testNum << "!";
	std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
