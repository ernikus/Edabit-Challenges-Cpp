//Title:        2048 Tiles Slide
//Difficulty:   Very Hard
//Source:       https://edabit.com/challenge/k6ekHefhZzWgC5whv
//Soln Author:	ernikus

#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>


std::vector<int> leftSlide(std::vector<int> row)
{
	std::stack <int> stos;
	bool locked{ false };

	for (int i = 0; i < row.size(); i++)
	{
		if (row[i] == 0)
			continue; 
		else if (stos.empty())
		{
			stos.push(row[i]);
			continue;
		}

		if ((stos.top() == row[i]) && locked==false)
		{
			int number = stos.top() + row[i];

			stos.pop();
			stos.push(number);
			locked = true;
		}
		else
		{
			stos.push(row[i]);
			locked = false;
		}
	}

	std::vector<int> result{};

	while (!stos.empty())
	{
		result.push_back(stos.top());
		stos.pop();
	}

	std::reverse(result.begin(), result.end());

	for (int i = result.size(); i < row.size(); ++i)
	{
		result.push_back(0);
	}


	return result;
}