//Title:        Perfect Square Patch
//Difficulty:   Medium
//Source:       https://edabit.com/challenge/omTRzwvBibk4etBkx
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>
#include <vector>

bool execute(const int input, const std::vector< std::vector<int> > output, const std::vector< std::vector<int> > answer)
{
    std::cout << "Input:\t" << input << std::endl;

    std::cout << "Output:" << std::endl;
    for (int i = 0; i < output.size(); ++i)
    {
        for (int j = 0; j < output[i].size(); ++j)
            std::cout << output[i][j] << " ";

        std::cout << std::endl;
    }
    std::cout << std::endl;

    std::cout << "Answer:" << std::endl;
    for (int i = 0; i < answer.size(); ++i)
    {
        for (int j = 0; j < answer[i].size(); ++j)
            std::cout << answer[i][j] << " ";

        std::cout << std::endl;
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
        return false;
    }
}

int main()
{
    int correct{ 0 }, testNum{ 0 };

	correct += execute(3, squarePatch(3), {
			{3, 3, 3},
			{3, 3, 3},
			{3, 3, 3} });
	testNum++;
	
	correct += execute(2, squarePatch(2), {
			{2, 2},
			{2, 2} });
	testNum++;

	correct += execute(4, squarePatch(4), {
			{4, 4, 4, 4},
			{4, 4, 4, 4},
			{4, 4, 4, 4},
			{4, 4, 4, 4} });
	testNum++;
	
	correct += execute(5, squarePatch(5), {
			{5, 5, 5, 5, 5},
			{5, 5, 5, 5, 5},
			{5, 5, 5, 5, 5},
			{5, 5, 5, 5, 5},
			{5, 5, 5, 5, 5}});
    testNum++;

	correct += execute(6, squarePatch(6), {
			{6, 6, 6, 6, 6, 6},
			{6, 6, 6, 6, 6, 6},
			{6, 6, 6, 6, 6, 6},
			{6, 6, 6, 6, 6, 6},
			{6, 6, 6, 6, 6, 6},
			{6, 6, 6, 6, 6, 6} });
	testNum++;

	correct += execute(11, squarePatch(11), {
			{11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11},
			{11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11},
			{11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11},
			{11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11},
			{11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11},
			{11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11},
			{11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11},
			{11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11},
			{11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11},
			{11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11},
			{11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11} });
	testNum++;

	correct += execute(1, squarePatch(1), { {1} });
	testNum++;

	correct += execute(0, squarePatch(0), {});
	testNum++;


    /*
    
    Assert::That(squarePatch(3), Equals(std::vector<std::vector<int>>({
			{3, 3, 3}, 
			{3, 3, 3}, 
			{3, 3, 3}
		})));
	}
	It(test2)
	{
		Assert::That(squarePatch(2), Equals(std::vector<std::vector<int>>({
			{2, 2}, 
			{2, 2}
		})));
	}
		It(test3)
	{
		Assert::That(squarePatch(4), Equals(std::vector<std::vector<int>>({
			{4, 4, 4, 4}, 
			{4, 4, 4, 4}, 
			{4, 4, 4, 4}, 
			{4, 4, 4, 4}
		})));
	}
	It(test4)
	{
		Assert::That(squarePatch(5), Equals(std::vector<std::vector<int>>({
			{5, 5, 5, 5, 5}, 
			{5, 5, 5, 5, 5}, 
			{5, 5, 5, 5, 5}, 
			{5, 5, 5, 5, 5}, 
			{5, 5, 5, 5, 5}
		})));
	}
		It(test5)
	{
		Assert::That(squarePatch(6), Equals(std::vector<std::vector<int>>({
			{6, 6, 6, 6, 6, 6}, 
			{6, 6, 6, 6, 6, 6}, 
			{6, 6, 6, 6, 6, 6}, 
			{6, 6, 6, 6, 6, 6}, 
			{6, 6, 6, 6, 6, 6}, 
			{6, 6, 6, 6, 6, 6}
		})));
	}
    
    */


    std::cout << "Correctness: " << std::endl;
    std::cout << correct << "/" << testNum << "!";
    std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
