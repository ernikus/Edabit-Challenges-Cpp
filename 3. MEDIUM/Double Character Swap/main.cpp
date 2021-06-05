//Title:        Double Character Swap
//Difficulty:   Medium
//Source:       https://edabit.com/challenge/s695FkhRd3J65tmdQ
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>

bool execute(std::string const inputData1, char const inputData2, char const inputData3, std::string const test, std::string const answer)
{
    std::cout << "Input1:\t" << inputData1 << std::endl;
    std::cout << "Input2:\t" << inputData2 << std::endl;
    std::cout << "Input3:\t" << inputData3 << std::endl;
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
    
    correct += execute("aabbccc", 'a', 'b', doubleSwap("aabbccc", 'a', 'b'), "bbaaccc");
    testNum++;

    correct += execute("random w#rds writt&n h&r&", '#', '&', doubleSwap("random w#rds writt&n h&r&", '#', '&'), "random w&rds writt#n h#r#");
    testNum++;

    correct += execute("128 895 556 788 999", '8', '9', doubleSwap("128 895 556 788 999", '8', '9'), "129 985 556 799 888");
    testNum++;

    correct += execute("mamma mia", 'm', 'a', doubleSwap("mamma mia", 'm', 'a'), "amaam aim");
    testNum++;

    correct += execute("**##**", '*', '#', doubleSwap("**##**", '*', '#'), "##**##");
    testNum++;

    correct += execute("123456789", '4', '5', doubleSwap("123456789", '4', '5'), "123546789");
    testNum++;

    correct += execute("445566&&", '4', '&', doubleSwap("445566&&", '4', '&'), "&&556644");
    testNum++;

    correct += execute("!?@,.", ',', '.', doubleSwap("!?@,.", ',', '.'), "!?@.,");
    testNum++;

    correct += execute("Q_Q T_T =.= >.<", 'Q', 'T', doubleSwap("Q_Q T_T =.= >.<", 'Q', 'T'), "T_T Q_Q =.= >.<");
    testNum++;

    correct += execute("(Q_Q) (T_T) (=.=) (>.<)", ')', '(', doubleSwap("(Q_Q) (T_T) (=.=) (>.<)", ')', '('), ")Q_Q( )T_T( )=.=( )>.<(");
    testNum++;

    correct += execute("<>", '>', '<', doubleSwap("<>", '>', '<'), "><");
    testNum++;

    correct += execute("001101", '1', '0', doubleSwap("001101", '1', '0'), "110010");
    testNum++;

    correct += execute("!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 'a', 'b', doubleSwap("!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 'a', 'b'), "!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`bacdefghijklmnopqrstuvwxyz{|}~");
    testNum++;


    std::cout << "Correctness: " << std::endl;
    std::cout << correct << "/" << testNum << "!";
    std::cout << "\t(" << int(float(correct)/ float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;
}