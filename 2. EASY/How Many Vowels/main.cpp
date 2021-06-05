//Title:        How Many Vowels?
//Difficulty:   Easy
//Source:       https://edabit.com/challenge/jwPaBe2xjE46baPoG
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>

bool execute(std::string const inputData, int const test, int const answer)
{
    std::cout << "Input:\t" << inputData << std::endl;
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
    int correct{ 0 }, testNum{0};
    
    correct += execute("Celebration", countVowels("Celebration"), 5);
    testNum++;
    
    correct += execute("Palm", countVowels("Palm"), 1);
    testNum++;

    correct += execute("Prediction", countVowels("Prediction"), 4);
    testNum++;

    correct += execute("Suite", countVowels("Suite"), 3);
    testNum++;

    correct += execute("Quote", countVowels("Quote"), 3);
    testNum++;

    correct += execute("Portrait", countVowels("Portrait"), 3);
    testNum++;

    correct += execute("Steam", countVowels("Steam"), 2);
    testNum++;

    correct += execute("Tape", countVowels("Tape"), 2);
    testNum++;

    correct += execute("Nightmare", countVowels("Nightmare"), 3);
    testNum++;

    correct += execute("Convention", countVowels("Convention"), 4);
    testNum++;


    std::cout << "Correctness: " << std::endl;
    std::cout << correct << "/" << testNum << "!";
    std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
