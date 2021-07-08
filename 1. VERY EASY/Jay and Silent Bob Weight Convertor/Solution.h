//Title:        Jay and Silent Bob Weight Convertor
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/QuuHXmkvrtErDBj88
//Soln Author:	ernikus

#pragma once

#include <iostream>
#include <cstdlib>
#include <string>

std::string jayAndBob(std::string str)
{
	float original = 28.3495;
	int number{};

	if (str == "half")
		number = int(original) / 2;
	else if (str == "quarter")
		number = int(original) / 4;
	else if (str == "eight")
		number = int(original) / 8;
	else if (str == "sixteenth")
		number = int(original) / 16;
	else
		exit(-1);

	return (std::to_string(number) + " grams");
}