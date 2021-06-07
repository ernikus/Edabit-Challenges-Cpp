//Title:        Buggy Code (Part 7)
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/cXwstTcnD56XqSKgC
//Soln Author:	ernikus

#pragma once

#include<iostream>
#include<utility> 
#include<algorithm>

std::pair<int, int> swap(int a, int b)
{
	std::swap(a, b);

	return std::make_pair(a, b);
}