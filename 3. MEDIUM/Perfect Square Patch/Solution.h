//Title:        Perfect Square Patch
//Difficulty:   Medium
//Source:       https://edabit.com/challenge/omTRzwvBibk4etBkx
//Soln Author:	ernikus

#pragma once

#include <iostream>
#include <vector>

std::vector< std::vector<int> > squarePatch(int n)
{
	std::vector< std::vector<int> > vec(n, std::vector<int>(n, n));

	return vec;
}