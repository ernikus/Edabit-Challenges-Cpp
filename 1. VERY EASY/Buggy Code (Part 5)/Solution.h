//Title:        Buggy Code (Part 5)
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/xrxtu8H8pGig8FLLX
//Soln Author:	ernikus

#pragma once

#include <iostream>
#include <vector>

std::vector<int> printArray(int n)
{
    std::vector<int> newArray{};

    for (int i = 1; i <= n; i++)
    {
        newArray.push_back(i);
    }

    return newArray;
}