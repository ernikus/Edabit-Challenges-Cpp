//Title:        Find the Bomb
//Difficulty:   Medium
//Source:       https://edabit.com/challenge/FbgicbJyLQan2pbde
//Soln Author:	ernikus

#pragma once

#include <iostream>

std::string bomb(std::string str)
{
    for (int i = 0; i < str.length()-3; i++)
        if (str[i] == 'b' || str[i] == 'B')
            if (str[i + 1] == 'o' || str[i + 1] == 'O')
                if (str[i + 2] == 'm' || str[i + 2] == 'M')
                    if (str[i + 3] == 'b' || str[i + 3] == 'B')
                        return "Duck!!!";

    return "There is no bomb, relax.";
}