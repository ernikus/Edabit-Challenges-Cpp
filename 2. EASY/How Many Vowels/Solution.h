//Title:        How Many Vowels?
//Difficulty:   Easy
//Source:       https://edabit.com/challenge/jwPaBe2xjE46baPoG
//Soln Author:	ernikus

#pragma once

#include <iostream>

int countVowels(std::string str)
{
    int vowels{ 0 };

    for (int i = 0; i < str.length(); i++)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'i' || str[i] == 'u')
            vowels++;

    return vowels;
}
