//Title:        Two Makes Ten
//Difficulty:   Very Easy
//Source:       https://edabit.com/challenge/jweDwK44Yyow8gXJs
//Soln Author:	ernikus

#pragma once

bool makesTen(int a, int b)
{
    if (a == 10 || b == 10 || a + b == 10)
        return true;
    else
        return false;
}