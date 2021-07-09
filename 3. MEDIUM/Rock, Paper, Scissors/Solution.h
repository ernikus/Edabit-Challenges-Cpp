//Title:        Simulate the Game "Rock, Paper, Scissors"
//Difficulty:   Medium
//Source:       https://edabit.com/challenge/MYqnQ3DpPZi9di4iW
//Soln Author:	ernikus

#pragma once

#include <iostream>

std::string rps(std::string s1, std::string s2)
{
	std::string text{};
	
	if (s1 == s2)
		text = "TIE";

	else if (s1 == "rock")
	{
		if (s2 == "scissors")
		{
			text = "Player 1 wins";
		}
		else if (s2 == "paper")
		{
			text = "Player 2 wins";
		}
	}
	else if (s1 == "paper")
	{
		if (s2 == "rock")
		{
			text = "Player 1 wins";
		}
		else if (s2 == "scissors")
		{
			text = "Player 2 wins";
		}
	}
	else if (s1 == "scissors")
	{
		if (s2 == "paper")
		{
			text = "Player 1 wins";
		}
		else if (s2 == "rock")
		{
			text = "Player 2 wins";
		}
	}

	return text;
}