//Title:        Luke, I Am Your ...
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/fZBR6hjwAZhspyTx3
//Soln Author:	ernikus

#pragma once

#include <iostream>
#include <vector>
#include <cstdlib>

std::string relationToLuke(const std::string name)
{
	std::string text = "Luke, I am your ";

	if (name == "Darth Vader")
		text += "father.";
	else if (name == "Leia")
		text += "sister.";
	else if (name == "Han")
		text += "brother in law.";
	else if (name == "R2D2")
		text += "droid.";
	else
		exit (-1);

	return text;
}