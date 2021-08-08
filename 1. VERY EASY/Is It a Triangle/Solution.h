//Title:        Is It a Triangle?
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/BuLqtox4nXpXPhv6a
//Soln Author:	ernikus

#pragma once

#include <iostream>

bool isTriangle(int a, int b, int c)
{
	if ((a + b > c) && (b + c > a) && (a + c > b))
		return true;
	else
		return false;
}