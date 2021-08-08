//Title:        Blah, Blah, Blah...
//Difficulty:   Hard
//Source:       https://edabit.com/challenge/vNaEoC9WfRWvwSmje
//Soln Author:	ernikus

#pragma once

#include <iostream>
#include <vector>

std::string blahBlah(std::string str, int n)
{
	int numb = n;
	
	std::vector<std::string> test{};

	std::string trial{};

	for (int i = 0; i < str.size(); ++i)
	{
		if (isspace(str[i])||i==(str.size()-1))
		{
			if(i == (str.size() - 1))
				trial += str[i];
			
			test.push_back(trial);
			trial.erase();
		}
		else
		{
			trial += str[i];
		}
	}

	int k = 0;

	if (test.size() < numb)
		numb = test.size();

	for (int i = (test.size() - 1); k < numb; i--)
	{
		test[i] = "blah";

		if (k == 0)
			test[i] += "...";

		k++;
	}

	std::string final{};

	for (int i = 0; i < test.size(); ++i)
	{
		if (i != 0)
			final += " ";
		
		final += test[i];
	}

	return final;
}