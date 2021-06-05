//Title:        Broken Bridge
//Difficulty:   Easy
//Source:       https://edabit.com/challenge/udrQ2ckXP9cXNXiSk
//Soln Author:	ernikus

#pragma once

#include <iostream>

bool isSafeBridge(std::string s)
{
    for (int i = 0; i < s.length(); i++)
        if (s[i] != '#')
            return false;
    return true;
}