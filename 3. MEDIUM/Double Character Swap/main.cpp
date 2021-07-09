//Title:        Double Character Swap
//Difficulty:   Medium
//Source:       https://edabit.com/challenge/s695FkhRd3J65tmdQ
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>

bool execute(const std::string input1, const char input2, const char input3, const std::string output, const std::string answer)
{
    std::cout << "Input1:\t" << input1 << std::endl;
    std::cout << "Input2:\t" << input2 << std::endl;
    std::cout << "Input3:\t" << input3 << std::endl;
    std::cout << "Output:\t" << output << std::endl;
    std::cout << "Answer:\t" << answer << std::endl;

    if (output == answer)
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