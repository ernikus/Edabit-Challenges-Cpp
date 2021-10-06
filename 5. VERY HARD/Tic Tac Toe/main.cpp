//Title:        Tic Tac Toe
//Difficulty:   Very Hard
//Source:       https://edabit.com/challenge/rscwis53jKokoKRYo
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>
#include <string>
#include <vector>


bool execute(const std::vector<std::vector<char>> input, const std::string output, const std::string answer, std::vector<std::string>& failed)
{
	std::string comp{};
	comp += "Input";

	std::cout << "Input:\t";
	
	for (int i = 0; i < input.size(); i++)
	{
		for (int j = 0; j < input[i].size(); j++)
		{
			std::cout << input[i][j] << " ";
			comp += input[i][j] + " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

	comp += ";\tOutput: ";

	std::cout << "Output:\t";
	for (int i = 0; i < output.size(); ++i)
	{
		std::cout << output[i];
		comp += output[i];
	}
	std::cout << std::endl;

	comp += ";\tAnswer: ";

	std::cout << "Answer:\t";
	for (int i = 0; i < answer.size(); ++i)
	{
		std::cout << answer[i];
		comp += answer[i];
	}
	std::cout << std::endl;


	if (output == answer)
	{
		std::cout << "Correct Answer!" << std::endl << std::endl;
		return true;
	}
	else
	{
		std::cout << "Bad Answer!" << std::endl << std::endl;

		failed.push_back(comp);
		return false;
	}
}

int main()
{
	int correct{ 0 }, testNum{ 0 };
	std::vector<std::string> failed{};

	correct += execute({ {'X', 'O', 'O'},{'O', 'X', 'O'},{'O', '#', 'X'} }, ticTacToe({{'X', 'O', 'O'},{'O', 'X', 'O'},{'O', '#', 'X'}}),
						"Player 1 wins", failed);
	testNum++;


	correct += execute({ {'X', 'O', 'O'}, {'O', 'X', 'O'}, {'O', '#', 'O'} }, ticTacToe({{'X', 'O', 'O'}, {'O', 'X', 'O'}, {'O', '#', 'O'}}),
						"Player 2 wins", failed);
	testNum++;


	correct += execute({ {'X', 'O', 'O'}, {'O', 'X', 'O'}, {'O', 'O', '#'} }, ticTacToe({{'X', 'O', 'O'}, {'O', 'X', 'O'}, {'O', 'O', '#'}}),
						"It's a Tie", failed);
	testNum++;


	correct += execute({ {'X', 'O', 'O'},{'X', 'X', 'O'},{'X', 'O', '#'} }, ticTacToe({{'X', 'O', 'O'},{'X', 'X', 'O'},{'X', 'O', '#'}}),
						"Player 1 wins", failed);
	testNum++;


	correct += execute({ {'X', '#', 'O'},{'X', 'X', 'O'},{'#', 'O', '#'} }, ticTacToe({{'X', '#', 'O'},{'X', 'X', 'O'},{'#', 'O', '#'}}),
						"It's a Tie", failed);
	testNum++;


	correct += execute({ {'X', 'X', 'X'},{'X', 'O', 'O'},{'O', 'O', 'X'} }, ticTacToe({{'X', 'X', 'X'},{'X', 'O', 'O'},{'O', 'O', 'X'}}),
						"Player 1 wins", failed);
	testNum++;


	correct += execute({ {'X', 'O', 'O'},{'X', 'O', 'O'},{'O', 'X', 'X'} }, ticTacToe({{'X', 'O', 'O'},{'X', 'O', 'O'},{'O', 'X', 'X'}}),
						"Player 2 wins", failed);
	testNum++;



	correct += execute({ {'X', 'O', 'O'},{'X', 'O', 'O'},{'#', 'X', 'X'} }, ticTacToe({{'X', 'O', 'O'},{'X', 'O', 'O'},{'#', 'X', 'X'}}),
						"It's a Tie", failed);
	testNum++;


	correct += execute({ {'X', 'O', 'O'},{'O', 'O', 'O'},{'#', 'X', 'X'} }, ticTacToe({{'X', 'O', 'O'},{'O', 'O', 'O'},{'#', 'X', 'X'}}),
						"Player 2 wins", failed);
	testNum++;


	std::cout << "Correctness: " << std::endl;
	std::cout << correct << "/" << testNum << "!";
	std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;

	if (!failed.empty())
	{
		std::cout << "Failed: " << testNum - correct << std::endl;

		for (int i = 0; i < failed.size(); ++i)
		{
			std::cout << failed[i] << std::endl;
		}
	}
}
