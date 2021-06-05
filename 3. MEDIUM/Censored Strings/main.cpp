//Title:        C*ns*r*d Str*ngs
//Difficulty:   Medium
//Source:       https://edabit.com/challenge/Wv9ZeXyC32EMfRWGB
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>

bool execute(std::string const inputData1, std::string const inputData2, std::string const test, std::string const answer)
{
    std::cout << "Input1:\t" << inputData1 << std::endl;
    std::cout << "Input2:\t" << inputData2 << std::endl;
    std::cout << "Output:\t" << test << std::endl;
    std::cout << "Answer:\t" << answer << std::endl;

    if (test == answer)
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

    correct += execute("Wh*r* d*d my v*w*ls g*?", "eeioeo", uncensor("Wh*r* d*d my v*w*ls g*?", "eeioeo"), "Where did my vowels go?");
    testNum++;

    correct += execute("abcd", "", uncensor("abcd", ""), "abcd");
    testNum++;

    correct += execute("*PP*RC*S*", "UEAE", uncensor("*PP*RC*S*", "UEAE"), "UPPERCASE");
    testNum++;

    correct += execute("Ch**s*, Gr*mm*t -- ch**s*", "eeeoieee", uncensor("Ch**s*, Gr*mm*t -- ch**s*", "eeeoieee"), "Cheese, Grommit -- cheese");
    testNum++;

    correct += execute("*l*ph*nt", "Eea", uncensor("*l*ph*nt", "Eea"), "Elephant");
    testNum++;


    std::cout << "Correctness: " << std::endl;
    std::cout << correct << "/" << testNum << "!";
    std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
