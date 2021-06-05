//Title:        Burrrrrrrp
//Difficulty:   Easy
//Source:       https://edabit.com/challenge/vxpP4nnDhRr2Yc3Lo
//Soln Author:	ernikus

#pragma once

#include <iostream>

std::string longBurp(int num)
{
	std::string word{};

	word += "Bu";

	for (int i = 0; i < num; i++)
	{
		word += "r";
	}

	word += "p";

	return word;
}