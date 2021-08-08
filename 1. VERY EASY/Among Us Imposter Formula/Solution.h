//Title:        Among Us Imposter Formula
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/HycqNJ8BwcYbxmaXu
//Soln Author:	ernikus

#pragma once

#include <iostream>
#include <string>
#include <cmath>

std::string imposterFormula(int i, int p)
{
	if (i > 3)
		i = 3;

	if (p > 10)
		p = 10;

	int result = round((i / float(p))*100);

	std::string text = std::to_string(result) + "%";

	return text;
}