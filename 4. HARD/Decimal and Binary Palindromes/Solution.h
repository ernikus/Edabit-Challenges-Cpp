//Title:        Decimal and Binary Palindromes
//Difficulty:   Hard
//Source:       https://edabit.com/challenge/x2E67xrzD4dPLWaBs
//Soln Author:	ernikus

#pragma once

#include <iostream>
#include <vector>
#include <string>


std::string reverseStr(std::string org)
{
	std::string result{};

	for (int i = org.size()-1; i >=0; i--)
	{
		result += org[i];
	}

	return result;
}


std::string palindromeType(int n)
{
	int maxTwo = { 1 };

	while (maxTwo < n)
	{
		maxTwo *= 2;
	}

	int nCopy = n;
	std::string binary{};

	while (true)
	{
		if (nCopy >= maxTwo)
		{
			nCopy -= maxTwo;
			binary += "1";
		}
		else if (!binary.empty())
		{
			binary += "0";
		}
		
		if (maxTwo == 1)
			break;

		maxTwo = maxTwo / 2;
	}


	bool bin{ false }, dec{ false };

	std::string nStr = std::to_string(n);

	if (nStr == reverseStr(nStr))
		dec = true;

	if (binary == reverseStr(binary))
		bin = true;


	if (dec == true && bin == true)
	{
		return "Decimal and binary.";
	}
	else if (dec == true)
	{
		return "Decimal only.";
	}
	else if (bin == true)
	{
		return "Binary only.";
	}
	else
	{
		return "Neither!";
	}
}