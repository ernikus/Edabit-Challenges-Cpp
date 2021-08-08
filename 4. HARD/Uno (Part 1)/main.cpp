//Title:        Uno (Part 1)
//Difficulty:   Hard
//Source:       https://edabit.com/challenge/KWu64CmjkD8g7icEM
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>

bool execute(const std::vector<std::string> input1, const std::string input2, const bool output, const bool answer)
{
	std::cout << "Input1:\t";
	for (int i = 0; i < input1.size(); i++)
	{
		std::cout << input1[i] << " ";
	}
	std::cout << std::endl;

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

	correct += execute({ "yellow 3", "yellow 5", "red 8" }, "red 2", canPlay({ "yellow 3", "yellow 5", "red 8" }, "red 2"), true);
	testNum++;


	correct += execute({ "yellow 3", "yellow 5", "red 8" }, "blue 5", canPlay({ "yellow 3", "yellow 5", "red 8" }, "blue 5"), true);
	testNum++;

	correct += execute({ "yellow 3", "blue 5", "red 8", "red 9" }, "green 4", canPlay({ "yellow 3", "blue 5", "red 8", "red 9" }, "green 4"), false);
	testNum++;

	correct += execute({"yellow 3", "red 8"}, "green 2", canPlay({"yellow 3", "red 8"}, "green 2"), false);
	testNum++;

	correct += execute({ "yellow 5", "yellow 8", "red 0", "blue 0", "green 4" }, "green 2", canPlay({ "yellow 5", "yellow 8", "red 0", "blue 0", "green 4" }, "green 2"), true);
	testNum++;

	correct += execute({}, "green 2", canPlay({}, "green 2"), false);
	testNum++;

	correct += execute({ "red 2" }, "red 0", canPlay({ "red 2" }, "red 0"), true);
	testNum++;

	correct += execute({ "red 2", "red 8", "red 5" }, "blue 1", canPlay({ "red 2", "red 8", "red 5" }, "blue 1"), false);
	testNum++;


	std::cout << "Correctness: " << std::endl;
	std::cout << correct << "/" << testNum << "!";
	std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
