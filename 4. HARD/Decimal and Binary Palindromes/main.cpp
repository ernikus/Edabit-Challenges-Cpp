//Title:        Decimal and Binary Palindromes
//Difficulty:   Hard
//Source:       https://edabit.com/challenge/x2E67xrzD4dPLWaBs
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>
#include <string>
#include <vector>


bool execute(const int input, const std::string output, const std::string answer, std::vector<std::string>& failed)
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

		failed.push_back("Input: " + std::to_string(input) + ";\tOutput: " + output + ";\tAnswer: " + answer);
		return false;
	}
}

int main()
{
	int correct{ 0 }, testNum{ 0 };
	std::vector<std::string> failed{};

	correct += execute(1934391, palindromeType(1934391), "Decimal and binary.", failed);
	testNum++;

	correct += execute(9994521, palindromeType(9994521), "Binary only.", failed);
	testNum++;

	correct += execute(5841485, palindromeType(5841485), "Decimal and binary.", failed);
	testNum++;

	correct += execute(8337738, palindromeType(8337738), "Neither!", failed);
	testNum++;

	correct += execute(7447, palindromeType(7447), "Decimal and binary.", failed);
	testNum++;

	correct += execute(18985, palindromeType(18985), "Binary only.", failed);
	testNum++;

	correct += execute(7, palindromeType(7), "Decimal and binary.", failed);
	testNum++;

	correct += execute(1, palindromeType(1), "Decimal and binary.", failed);
	testNum++;

	correct += execute(1903127, palindromeType(1903127), "Binary only.", failed);
	testNum++;

	correct += execute(4, palindromeType(4), "Decimal only.", failed);
	testNum++;

	correct += execute(48084, palindromeType(48084), "Decimal only.", failed);
	testNum++;

	correct += execute(427787, palindromeType(427787), "Binary only.", failed);
	testNum++;

	correct += execute(456, palindromeType(456), "Neither!", failed);
	testNum++;

	correct += execute(313, palindromeType(313), "Decimal and binary.", failed);
	testNum++;

	correct += execute(3664663, palindromeType(3664663), "Decimal only.", failed);
	testNum++;

	correct += execute(585585, palindromeType(585585), "Decimal and binary.", failed);
	testNum++;

	correct += execute(14441, palindromeType(14441), "Decimal only.", failed);
	testNum++;

	correct += execute(8494948, palindromeType(8494948), "Decimal only.", failed);
	testNum++;

	correct += execute(932, palindromeType(932), "Neither!", failed);
	testNum++;

	correct += execute(7115931, palindromeType(7115931), "Binary only.", failed);
	testNum++;

	correct += execute(101, palindromeType(101), "Decimal only.", failed);
	testNum++;

	correct += execute(6286333, palindromeType(6286333), "Binary only.", failed);
	testNum++;


	std::cout << "Correctness: " << std::endl;
	std::cout << correct << "/" << testNum << "!";
	std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;

	if (!failed.empty())
	{
		std::cout << "Failed: " << testNum - correct << std::endl;
		
		for (int i = 0; i < failed.size(); ++i)
		{
			std::cout << failed[i] << std::endl;
		}
	}
}
