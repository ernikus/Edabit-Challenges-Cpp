//Title:        Blah, Blah, Blah...
//Difficulty:   Hard
//Source:       https://edabit.com/challenge/vNaEoC9WfRWvwSmje
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>

bool execute(const std::string input1, const int input2, const std::string output, const std::string answer)
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

	correct += execute("A function is a block of code which only runs when it is called", 5,
		blahBlah("A function is a block of code which only runs when it is called", 5), "A function is a block of code which only blah blah blah blah blah...");
	testNum++;


	correct += execute("one two three four five", 2,
		blahBlah("one two three four five", 2), "one two three blah blah...");
	testNum++;

	correct += execute("Sphinx of black quartz judge my vow", 10,
		blahBlah("Sphinx of black quartz judge my vow", 10), "blah blah blah blah blah blah blah...");
	testNum++;

	correct += execute("The quadratic formula is negative b plus or minus the square root of b squared subtract four ac all over two a", 5,
		blahBlah("The quadratic formula is negative b plus or minus the square root of b squared subtract four ac all over two a", 5), "The quadratic formula is negative b plus or minus the square root of b squared subtract four blah blah blah blah blah...");
	testNum++;


	std::cout << "Correctness: " << std::endl;
	std::cout << correct << "/" << testNum << "!";
	std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
