//Title:        First Class, Second Class and Third Class Levers
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/qJdJ7g9akxfEiKAM6
//Soln Author:	ernikus

#pragma once

#include <iostream>
#include <vector>

std::string determineLever(std::vector<char> arr)
{
	std::string text{};
	
	std::vector<char> arr1{ 'e', 'f', 'l' };
	std::vector<char> arr2{ 'e', 'l', 'f' };
	std::vector<char> arr3{ 'f', 'e', 'l' };

	if (arr == arr1)
		text = "first class lever";
	else if (arr == arr2)
		text = "second class lever";
	else if (arr == arr3)
		text = "third class lever";
	else
		text = "unknown class lever";

	return text;
}