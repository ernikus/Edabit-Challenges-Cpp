//Title:        Split 25 (Part 1)
//Difficulty:   Very Hard
//Source:       https://edabit.com/challenge/PbtMHCLm83NwqSnnS
//Soln Author:	ernikus

#pragma once

#include <iostream>


int split(int num)
{
	int number = num;
	int threeNumb{ 0 };

	while (number > 3)
	{
		number -= 3;
		threeNumb++;
		
		
		if ((number - 3) == 1)
			break;
	}

	int result = 1;

	for (int i = 0; i < threeNumb; ++i)
	{
		result *= 3;
	}

	if (number > 0)
		result *= number;


	return result;
}