//Title:        2048 Tiles Slide
//Difficulty:   Very Hard
//Source:       https://edabit.com/challenge/k6ekHefhZzWgC5whv
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>
#include <string>
#include <vector>


bool execute(const std::vector <int> input, const std::vector <int> output, const std::vector <int> answer, std::vector<std::string>& failed)
{
	std::string comp{};
	comp += "Input";

	std::cout << "Input:\t";
	for (int i = 0; i < input.size(); ++i)
	{
		std::cout << input[i] << " ";
		comp += input[i] + " ";
	}
	std::cout << std::endl;

	comp += ";\tOutput: ";

	std::cout << "Output:\t";
	for (int i = 0; i < output.size(); ++i)
	{
		std::cout << output[i] << " ";
		comp += output[i] + " ";
	}
	std::cout << std::endl;

	comp += ";\tAnswer: ";

	std::cout << "Answer:\t";
	for (int i = 0; i < answer.size(); ++i)
	{
		std::cout << answer[i] << " ";
		comp += answer[i] + " ";
	}
	std::cout << std::endl;


	if (output == answer)
	{
		std::cout << "Correct Answer!" << std::endl << std::endl;
		return true;
	}
	else
	{
		std::cout << "Bad Answer!" << std::endl << std::endl;

		failed.push_back(comp);
		return false;
	}
}

int main()
{
	int correct{ 0 }, testNum{ 0 };
	std::vector<std::string> failed{};

	correct += execute({ 2, 2, 2, 0 }, leftSlide({ 2, 2, 2, 0 }), { 4, 2, 0, 0 }, failed);
	testNum++;

	correct += execute({ 2, 2, 4, 4, 8, 8 }, leftSlide({ 2, 2, 4, 4, 8, 8 }), {4, 8, 16, 0, 0, 0}, failed);
	testNum++;

	correct += execute({ 0, 2, 0, 2, 4 }, leftSlide({ 0, 2, 0, 2, 4 }), {4, 4, 0, 0, 0}, failed);
	testNum++;

	correct += execute({ 0, 2, 2, 8, 8, 8 }, leftSlide({ 0, 2, 2, 8, 8, 8 }), {4, 16, 8, 0, 0, 0}, failed);
	testNum++;

	correct += execute({}, leftSlide({}), {}, failed);
	testNum++;

	correct += execute({ 0, 0, 0, 0 }, leftSlide({ 0, 0, 0, 0 }), {0, 0, 0, 0}, failed);
	testNum++;

	correct += execute({ 0, 0, 0, 2 }, leftSlide({ 0, 0, 0, 2 }), {2, 0, 0, 0}, failed);
	testNum++;

	correct += execute({ 2, 0, 0, 0 }, leftSlide({ 2, 0, 0, 0 }), {2, 0, 0, 0}, failed);
	testNum++;

	correct += execute({ 8, 2, 2, 4 }, leftSlide({ 8, 2, 2, 4 }), {8, 4, 4, 0}, failed);
	testNum++;

	correct += execute({ 2, 4, 2, 4 }, leftSlide({ 2, 4, 2, 4 }), {2, 4, 2, 4}, failed);
	testNum++;

	correct += execute({ 1024, 1024, 1024, 512, 512, 256, 256, 128, 128, 64, 32, 32 }, leftSlide({ 1024, 1024, 1024, 512, 512, 256, 256, 128, 128, 64, 32, 32 }), {2048, 1024, 1024, 512, 256, 64, 64, 0, 0, 0, 0, 0}, failed);
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
