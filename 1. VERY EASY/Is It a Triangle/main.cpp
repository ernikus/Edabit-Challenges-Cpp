//Title:        Is It a Triangle?
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/BuLqtox4nXpXPhv6a
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>

bool execute(const int input1, const int input2, const int input3, const bool output, const bool answer)
{
	std::cout << "Input1:\t" << input1 << std::endl;
	std::cout << "Input2:\t" << input2 << std::endl;
	std::cout << "Input3:\t" << input3 << std::endl;
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

	correct += execute(4, 5, 6, isTriangle(4, 5, 6), true);
	testNum++;

	correct += execute(3, 4, 6, isTriangle(3, 4, 6), true);
	testNum++;

	correct += execute(2, 5, 7, isTriangle(2, 5, 7), false);
	testNum++;

	correct += execute(2, 5, 9, isTriangle(2, 5, 9), false);
	testNum++;

	correct += execute(2, 9, 5, isTriangle(2, 9, 5), false);
	testNum++;

	correct += execute(9, 2, 5, isTriangle(9, 2, 5), false);
	testNum++;

	correct += execute(11, 12, 20, isTriangle(11, 12, 20), true);
	testNum++;

	correct += execute(14, 3, 12, isTriangle(14, 3, 12), true);
	testNum++;

	correct += execute(23, 4, 28, isTriangle(23, 4, 28), false);
	testNum++;

	correct += execute(21, 4, 25, isTriangle(21, 4, 25), false);
	testNum++;


	std::cout << "Correctness: " << std::endl;
	std::cout << correct << "/" << testNum << "!";
	std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
