//Title:        Buggy Code
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/9p6Lfwu8tYazvaHGe
//Soln Author:	ernikus

#pragma once

#include<iostream>

std::string has_bugs(bool buggy_code)
{
	if (buggy_code)
		return "sad days";
	else
		return "it's a good day";
}