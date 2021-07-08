//Title:        Is the Array Empty?
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/2w79wMaSF7Wiyebgc
//Soln Author:	ernikus

#pragma once

#include <iostream>
#include <vector>

bool isEmpty(std::vector<int> arr)
{
	if (arr.empty())
		return true;
	else
		return false;
}