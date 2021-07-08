//Title:        Alphabet Clash (Battle of the ASCII Values)
//Difficulty:   Very Hard
//Source:       https://edabit.com/challenge/XccJ395ab4DZYGZW9
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>
#include <vector>

bool execute(std::string inputDataA1, std::vector<int> inputDataA2, std::string inputDataB1, std::vector<int> inputDataB2, std::string const test, std::string const answer)
{
    std::cout << "InputA1:\t" << inputDataA1 << std::endl;
    std::cout << "InputA2:\t";

    for (int i = 0; i < inputDataA2.size(); i++)
        std::cout << inputDataA2[i] << " ";

    std::cout << std::endl;

    std::cout << "InputB1:\t" << inputDataB1 << std::endl;
    std::cout << "InputB2:\t";

    for (int i = 0; i < inputDataB2.size(); i++)
        std::cout << inputDataB2[i] << " ";

    std::cout << std::endl;

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

    correct += execute("MZNHUVIOEPTWFJCBXKALSDQGYR",
        { 1, 3, 2, 8, 10, 12, 9, 7, 4, 22 },
        "YFTUCSQOMGKPXNDWHIVJRABZEL",
        { 21, 24, 25, 3, 4, 1, 8, 9, 10, 17 },
        alphaClash(
        "MZNHUVIOEPTWFJCBXKALSDQGYR",
            { 1, 3, 2, 8, 10, 12, 9, 7, 4, 22 },
        "YFTUCSQOMGKPXNDWHIVJRABZEL",
            { 21, 24, 25, 3, 4, 1, 8, 9, 10, 17 }),
            "A: 64, Z: 96");
    testNum++;

    correct += execute("OZLICHFRKYBVUDSPWXJNGTQAEM",
        { 8, 6, 4, 2, 0, 10, 12, 14, 16, 18 },
        "WKJVUNXHRFDIOBTCSLZMPYGQAE",
        { 7, 5, 3, 1, 9, 11, 13, 15, 17, 19 },
        alphaClash("OZLICHFRKYBVUDSPWXJNGTQAEM",
            { 8, 6, 4, 2, 0, 10, 12, 14, 16, 18 },
            "WKJVUNXHRFDIOBTCSLZMPYGQAE",
            { 7, 5, 3, 1, 9, 11, 13, 15, 17, 19 }),
        "A: 77, Z: 63");
    testNum++;

    correct += execute("IBXOWMUSGYPADJCLVKETQRZHFN",
        { 23, 19, 21, 22, 2, 4, 6, 1, 0, 12 },
        "TOLFIYHGKWAXRBDQMVNJSPCUZE",
        { 15, 8, 2, 1, 0, 25, 12, 13, 16, 14 },
        alphaClash("IBXOWMUSGYPADJCLVKETQRZHFN",
            { 23, 19, 21, 22, 2, 4, 6, 1, 0, 12 },
            "TOLFIYHGKWAXRBDQMVNJSPCUZE",
            { 15, 8, 2, 1, 0, 25, 12, 13, 16, 14 }),
        "A: 75, Z: 50");
    testNum++;

    correct += execute("IBXOWMUSGYPADJCLVKETQRZHFN",
        { 15, 8, 2, 1, 0, 25, 12, 13, 16, 14 },
        "IBXOWMUSGYPADJCLVKETQRZHFN",
        { 15, 8, 2, 1, 0, 25, 12, 13, 16, 14 },
        alphaClash("IBXOWMUSGYPADJCLVKETQRZHFN",
            { 15, 8, 2, 1, 0, 25, 12, 13, 16, 14 },
            "IBXOWMUSGYPADJCLVKETQRZHFN",
            { 15, 8, 2, 1, 0, 25, 12, 13, 16, 14 }),
        "A: 0, Z: 0");
    testNum++;



    std::cout << "Correctness: " << std::endl;
    std::cout << correct << "/" << testNum << "!";
    std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}
