//Title:        C*ns*r*d Str*ngs
//Difficulty:   Medium
//Source:       https://edabit.com/challenge/Wv9ZeXyC32EMfRWGB
//Soln Author:	ernikus

#pragma once

#include <iostream>

std::string uncensor(std::string str, std::string vowels)
{
	if (!vowels.empty())
	{
		int num{ 0 };

		for (int i = 0; i < str.length(); i++)
			if (str[i] == '*')
			{
				str[i] = vowels[num];
				num++;
			}
	}
	
	return str;
}
