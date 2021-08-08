//Title:        Letter Distance
//Difficulty:   Hard
//Source:       https://edabit.com/challenge/5Xo5fBrQui9opFWH5
//Soln Author:	ernikus

#pragma once

#include <iostream>
#include <string>
#include <cmath>

int dist(const int a, const int b)
{
	return std::abs(a - b);
}

int letterDistance(std::string str1, std::string str2)
{
	int size{};
	
	if (str1.size() < str2.size())
		size = str1.size();
	else
		size = str2.size();


	int sum{};

	for (int i = 0; i < size; ++i)
	{
		sum += dist(int(str1[i]), int(str2[i]));
	}

	sum += dist(str1.size(), str2.size());

	return sum;
}