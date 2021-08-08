//Title:        Uno (Part 1)
//Difficulty:   Hard
//Source:       https://edabit.com/challenge/KWu64CmjkD8g7icEM
//Soln Author:	ernikus

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


void divide(const std::string input, std::string& col, int& numb)
{
	for (int i = 0; i < (input.size() - 2); i++)
		col += input[i];

	std::string trial{ input[input.size() - 1] };

	numb = std::stoi(trial);
}

void divide(const std::string input, std::vector<std::string> &color, std::vector<int> &numbers)
{
	std::string col{};
	int numb{};
	
	divide(input, col, numb);

	color.push_back(col);
	numbers.push_back(numb);
}

bool canPlay(std::vector<std::string> hand, std::string face)
{
	std::vector<std::string> color{};
	std::vector<int> numbers{};

	for (int i = 0; i<hand.size(); i++)
		divide(hand[i], color, numbers);

	std::string org_color{};
	int org_number{};

	divide(face, org_color, org_number);


	for (int i = 0; i < color.size(); i++)
	{
		if (color[i] == org_color)
			return true;

		if (numbers[i] == org_number)
			return true;
	}

	return false;
}