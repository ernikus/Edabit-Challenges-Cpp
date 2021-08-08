//Title:        Find the Odd Integer
//Difficulty:   Hard
//Source:       https://edabit.com/challenge/wgnmQTbfssuhvZHqe
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>

bool execute(const std::vector<int> input, const int output, const int answer)
{
	std::cout << "Input:\t";
	for (int i = 0; i < input.size(); i++)
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

	correct += execute({ 1,1,2,-2,5,2,4,4,-1,-2,5 }, findOdd({ 1,1,2,-2,5,2,4,4,-1,-2,5 }), -1);
	testNum++;

	correct += execute({ 20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5 }, findOdd({ 20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5 }), 5);
	testNum++;

	correct += execute({ 10 }, findOdd({ 10 }), 10);
	testNum++;

	correct += execute({ 1,1,1,1,1,1,10,1,1,1,1 }, findOdd({ 1,1,1,1,1,1,10,1,1,1,1 }), 10);
	testNum++;

	correct += execute({ 5,4,3,2,1,5,4,3,2,10,10 }, findOdd({ 5,4,3,2,1,5,4,3,2,10,10 }), 1);
	testNum++;


	std::cout << "Correctness: " << std::endl;
	std::cout << correct << "/" << testNum << "!";
	std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
