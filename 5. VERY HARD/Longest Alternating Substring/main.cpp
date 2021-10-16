//Title:        Longest Alternating Substring
//Difficulty:   Very Hard
//Source:       https://edabit.com/challenge/R95FfS8PGtsCLxnKH
//Soln Author:	ernikus

#include "Solution.h"

#include <iostream>
#include <string>
#include <vector>

extern std::string longestSubstring(std::string digits);

extern bool isEven(const int num);



bool execute(const std::string input, const std::string output, const std::string answer, std::vector<std::string>& failed)
{
	std::string comp{};
	
	std::cout << "Input:\t" << input << std::endl;

	comp += "Input";
	comp += input;


	std::cout << "Output:\t" << output << std::endl;

	comp += ";\tOutput: ";
	comp += output;


	std::cout << "Answer:\t" << answer << std::endl;

	comp += ";\tAnswer: ";
	comp += answer;


	if (output == answer)
	{
		std::cout << "Correct Answer!" << std::endl << std::endl;
		return true;
	}
	else
	{
		std::cout << "Bad Answer!" << std::endl << std::endl;

		failed.push_back(comp);
		return false;
	}
}

int main()
{
	int correct{ 0 }, testNum{ 0 };
	std::vector<std::string> failed{};

	correct += execute("844929328912985315632725682153", longestSubstring("844929328912985315632725682153"), "56327256", failed);
	testNum++;

    correct += execute("769697538272129475593767931733", longestSubstring("769697538272129475593767931733"), "27212947", failed);
	testNum++;

    correct += execute("937948289456111258444958189244", longestSubstring("937948289456111258444958189244"), "894561", failed);
	testNum++;

    correct += execute("736237766362158694825822899262", longestSubstring("736237766362158694825822899262"), "636", failed);
	testNum++;

    correct += execute("369715978955362655737322836233", longestSubstring("369715978955362655737322836233"), "369", failed);
	testNum++;

    correct += execute("345724969853525333273796592356", longestSubstring("345724969853525333273796592356"), "496985", failed);
	testNum++;

    correct += execute("548915548581127334254139969136", longestSubstring("548915548581127334254139969136"), "8581", failed);
	testNum++;
	
	correct += execute("417922164857852157775176959188", longestSubstring("417922164857852157775176959188"), "78521", failed);
	testNum++;
	
	correct += execute("251346385699223913113161144327", longestSubstring("251346385699223913113161144327"), "638569", failed);
	testNum++;
	
	correct += execute("483563951878576456268539849244", longestSubstring("483563951878576456268539849244"), "18785", failed);
	testNum++;
	
	correct += execute("853667717122615664748443484823", longestSubstring("853667717122615664748443484823"), "474", failed);
	testNum++;
	
	correct += execute("398785511683322662883368457392", longestSubstring("398785511683322662883368457392"), "98785", failed);
	testNum++;
	
	correct += execute("368293545763611759335443678239", longestSubstring("368293545763611759335443678239"), "76361", failed);
	testNum++;
	
	correct += execute("775195358448494712934755311372", longestSubstring("775195358448494712934755311372"), "4947", failed);
	testNum++;
	
	correct += execute("646113733929969155976523363762", longestSubstring("646113733929969155976523363762"), "76523", failed);
	testNum++;
	
	correct += execute("575337321726324966478369152265", longestSubstring("575337321726324966478369152265"), "478369", failed);
	testNum++;
	
	correct += execute("754388489999793138912431545258", longestSubstring("754388489999793138912431545258"), "545258", failed);
	testNum++;
	
	correct += execute("198644286258141856918653955964", longestSubstring("198644286258141856918653955964"), "2581418569", failed);
	testNum++;
	
	correct += execute("643349187319779695864213682274", longestSubstring("643349187319779695864213682274"), "349", failed);
	testNum++;
	
	correct += execute("919331281193713636178478295857", longestSubstring("919331281193713636178478295857"), "36361", failed);
	testNum++;



	std::cout << "Correctness: " << std::endl;
	std::cout << correct << "/" << testNum << "!";
	std::cout << "\t(" << int(float(correct) / float(testNum) * 100) << "%/" << 100 << "%)" << std::endl;

	if (!failed.empty())
	{
		std::cout << "Failed: " << testNum - correct << std::endl;

		for (int i = 0; i < failed.size(); ++i)
		{
			std::cout << failed[i] << std::endl;
		}
	}
}
