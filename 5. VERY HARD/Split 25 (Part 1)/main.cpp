//Title:        Split 25 (Part 1)
//Difficulty:   Very Hard
//Source:       https://edabit.com/challenge/PbtMHCLm83NwqSnnS
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>


bool execute(const int input, const int output, const int answer)
{
	std::cout << "Input:\t" << input << std::endl;
	std::cout << "Output:\t" << output << std::endl;
	std::cout << "Answer:\t"  << answer << std::endl;


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

	correct += execute(25, split(25), 8748);
	testNum++;

	correct += execute(1, split(1), 1);
	testNum++;

	correct += execute(10, split(10), 36);
	testNum++;

	correct += execute(5, split(5), 6);
	testNum++;

	correct += execute(15, split(15), 243);
	testNum++;

	correct += execute(20, split(20), 1458);
	testNum++;



	std::cout << "Correctness: " << std::endl;
	std::cout << correct << "/" << testNum << "!";
	std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
