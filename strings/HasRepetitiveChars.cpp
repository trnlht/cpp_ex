#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <algorithm>

#include "HasRepetitiveChars.h"

bool HasRepetitiveChars(const std::string& str)
{
	std::map<char, int> chars;

	for(char ch : str)
	{
		chars[ch]++;

		if (chars[ch] > 1)
			return true;
	}

	return false;
}

bool HasRepetitiveCharsSort(const std::string& str)
{
	std::string newstr(str.begin(), str.end());

	std::sort(newstr.begin(), newstr.end());

	for(int i = 0; i < newstr.size() - 1; i++)
	{
		if(newstr[i+1] == newstr[i])
			return true;
	}

	return false;
}

void HasRepetitiveCharsTest()
{
	std::vector<std::string> strings = {
					"aaabbc",
					"abcdef",
					"12345tyui",
					"uuaigh",
					"abheat"
	};
	
	std::cout << "HasRepetitiveChars:" << std::endl;
	for(const auto& s : strings)
		std::cout << "String: " << s << " Result: " << HasRepetitiveChars(s) << std::endl;

	std::cout << "HasRepetitiveCharsSort:" << std::endl;
	for(const auto& s : strings)
		std::cout << "String: " << s << " Result: " << HasRepetitiveCharsSort(s) << std::endl;
}
