//Title:        Fives and Threes Only
//Difficulty:   Very Hard
//Source:       https://edabit.com/challenge/Fb8p6vyLMsZX7EnKn
//Soln Author:	ernikus

#pragma once

#include <iostream>

bool functionReturn(const bool result, static bool &wasThree, static int &numBefore)
{
	numBefore = 0;
	wasThree = false;
	std::cout << std::endl;
	return (result);
}

bool only5and3(int n)
{
	static bool wasThree{ false };
	static int numBefore{ 0 };
	
	if (n == 0)
		return functionReturn(true, wasThree, numBefore);
		
	
	if ((n > 0) && (n % 5 == 0))
	{
		for (int i = 0; 5 * i <= n; ++i)
		{
			if (i == 0 && numBefore == 0)
				std::cout << "5 ";
			else
				std::cout << "+ 5 ";
		}

		return functionReturn(true, wasThree, numBefore);
	}

	if (n >= 3)
	{
		if (wasThree == false)
		{
			std::cout << "3 ";

			wasThree = true;
			numBefore = 3;

			if (only5and3(n - 3))
				return functionReturn(true, wasThree, numBefore);
		}
		else
		{
			int number = (numBefore * 3) - (numBefore);

			std::cout << "* 3 ";

			numBefore *= 3;

			if (only5and3(n - number))
				return functionReturn(true, wasThree, numBefore);
		}
		
	}
		
	return functionReturn(false, wasThree, numBefore);
}