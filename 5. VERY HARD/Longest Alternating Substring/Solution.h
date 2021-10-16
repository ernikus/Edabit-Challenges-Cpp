//Title:        Longest Alternating Substring
//Difficulty:   Very Hard
//Source:       https://edabit.com/challenge/R95FfS8PGtsCLxnKH
//Soln Author:	ernikus

#pragma once

#include <iostream>
#include <string>
#include <vector>



bool isEven(const int num)
{
    if(num%2==0)
        return true;
    else
        return false;
}


std::string longestSubstring(std::string digits)
{
	std::vector<std::string> numbers{};

    bool EvenBefore {}, EvenAfter{};

    std::string Data{};


    //first number
    Data += digits[0];

    EvenAfter = isEven(int(digits[0]));


    for(int i=1; i<digits.size(); ++i)
    {
        EvenBefore = isEven(int(digits[i]));

        if(EvenAfter != EvenBefore)
        {
            Data += digits[i];
        }
        else
        {
            numbers.push_back(Data);
            Data.erase();

            Data += digits[i];
        }

        EvenAfter = EvenBefore;
    }


    if(!Data.empty())
        numbers.push_back(Data);


    std::string result {};

    for(int i=0; i<numbers.size(); ++i)
    {
        int size = numbers[i].size();

        if(size>result.size())
            result = numbers[i];
    }

    return result;
}