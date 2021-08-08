//Title:        Letter Distance
//Difficulty:   Hard
//Source:       https://edabit.com/challenge/5Xo5fBrQui9opFWH5
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>

bool execute(const std::string input1, const std::string input2, const int output, const int answer)
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

	correct += execute("house", "fly", letterDistance("house", "fly"), 11);
	testNum++;

	correct += execute("sharp", "sharq", letterDistance("sharp", "sharq"), 1);
	testNum++;

	correct += execute("abcde", "bcdef", letterDistance("abcde", "bcdef"), 5);
	testNum++;

	correct += execute("abcde", "a", letterDistance("abcde", "a"), 4);
	testNum++;

	correct += execute("abcde", "e", letterDistance("abcde", "e"), 8);
	testNum++;

	correct += execute("very", "fragile", letterDistance("very", "fragile"), 67);
	testNum++;

	correct += execute("abcde", "Abcde", letterDistance("abcde", "Abcde"), 32);
	testNum++;

	correct += execute("abcde", "A", letterDistance("abcde", "A"), 36);
	testNum++;


	std::cout << "Correctness: " << std::endl;
	std::cout << correct << "/" << testNum << "!";
	std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
