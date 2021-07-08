//Title:        Alphabet Clash (Battle of the ASCII Values)
//Difficulty:   Very Hard
//Source:       https://edabit.com/challenge/XccJ395ab4DZYGZW9
//Soln Author:	ernikus

#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::string alphaClash(std::string str_A, std::vector<int> ind_A, std::string str_Z, std::vector<int> ind_Z)
{
	std::vector<int> val_A{};
	std::vector<int> val_Z{};
	
	sort(ind_A.begin(), ind_A.end());
	sort(ind_Z.begin(), ind_Z.end());

	//for A
	int j = 0;

	for (int i = 0; i < str_A.length(); i++)
	{
		if (i == ind_Z[j])
		{
			j++;

			if (j == 10)
				j = 0;
		}
		else
			val_A.push_back(int(str_A[i]));
	}

	//for Z
	j = 0;

	for (int i = 0; i < str_Z.length(); i++)
	{
		if (i == ind_A[j])
		{
			j++;

			if (j == 10)
				j = 0;
		}
		else
			val_Z.push_back(int(str_Z[i]));
	}
	
	if (val_A.size() != val_Z.size())
		return "-1";
	
	int points_A{ 0 }, points_Z{ 0 };

	for (int i = 0; i < val_A.size(); i++)
		if (val_A[i] > val_Z[i])
			points_A += val_A[i] - val_Z[i];
		else
			points_Z += val_Z[i] - val_A[i];

	std::string out = "A: " + std::to_string(points_A) + ", Z: " + std::to_string(points_Z);

	//"A: 64, Z: 96"
	return out;
}