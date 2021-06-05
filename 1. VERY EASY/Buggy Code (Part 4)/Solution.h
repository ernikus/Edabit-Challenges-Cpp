//Title:        Buggy Code (Part 4)
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/MaJbk3dZfr9a42ps9
//Soln Author:	ernikus

#pragma once

#include <iostream>

std::string greeting(std::string name)
{
    if (name == "Mubashir")
        return "Hello, my Love!";
    else
        return "Hello, " + name + "!";
}
