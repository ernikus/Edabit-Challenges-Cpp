//Title:        Tic Tac Toe
//Difficulty:   Very Hard
//Source:       https://edabit.com/challenge/rscwis53jKokoKRYo
//Soln Author:	ernikus

#pragma once

#include <iostream>
#include <vector>
#include <string>

char check(const char a, const char b, const char c)
{
	//X, 0, #
	char ttt_sign{};

	if (a != '#')
		ttt_sign = a;
	else if (b != '#')
		ttt_sign = b;
	else
		ttt_sign = c;

	bool isA, isB, isC;

	if (a == ttt_sign) //|| (a == '#'))
		isA = true;
	else
		isA = false;
	
	
	if (b == ttt_sign) //|| (b == '#'))
		isB = true;
	else
		isB = false;


	if (c == ttt_sign) //|| (c == '#'))
		isC = true;
	else
		isC = false;


	if (isA == true && isB == true && isC == true)
		return ttt_sign;
	else
		return '-';
}

std::string ticTacToe(std::vector<std::vector<char>> inputs)
{

	std::vector <std::vector <char> > v;
	
	for (int i = 0;; i++)
	{
		std::vector<char> temp{};
		
		if (i < 3)
		{
			for (int j = 0; j < inputs.size(); j++)
			{
				temp.push_back(inputs[j][i]);

			}
			v.push_back(temp);
		}
		else if (i < 6)
		{
			for (int j = 0; j < inputs.size(); j++)
			{
				temp.push_back(inputs[i - 3][j]);

			}
			v.push_back(temp);
		}
		else if (i == 6)
		{
			temp.push_back(inputs[0][0]);
			temp.push_back(inputs[1][1]);
			temp.push_back(inputs[2][2]);
			
			v.push_back(temp);
		}
		else if (i == 7)
		{
			temp.push_back(inputs[0][2]);
			temp.push_back(inputs[1][1]);
			temp.push_back(inputs[2][0]);
			
			v.push_back(temp);
		}
		else
			break;
	}


	for (int i = 0; i < v.size(); ++i)
	{
		char result = check(v[i][0], v[i][1], v[i][2]);

		if (result != '-')
			if (result == 'X')
				return "Player 1 wins";
			else
				return "Player 2 wins";
	}

	return "It's a Tie";
}