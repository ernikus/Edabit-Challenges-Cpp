//Title:        Find the Odd Integer
//Difficulty:   Hard
//Source:       https://edabit.com/challenge/wgnmQTbfssuhvZHqe
//Soln Author:	ernikus

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>


int findOdd(std::vector<int> arr)
{
	std::sort(arr.begin(), arr.end());

	int numb{ 0 };

	for (int i = 0; i < arr.size(); i++)
	{
		if (i == 0)
		{
			numb++;

			if (i == (arr.size() - 1))
				return arr[i];

			continue;
		}		


		if (arr[i] != arr[i - 1])
		{
			if (numb % 2 != 0)
				return arr[i - 1];
			else
			{
				numb = 1;

				if (i == (arr.size() - 1))
					return arr[i];
			}	
		}
		else
			numb++;
	}

	return 0;
}