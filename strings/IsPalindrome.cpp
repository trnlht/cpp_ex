// cpp_exercises.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "IsPalindrome.h"

#include <iostream>
#include <vector>
#include <cmath>

//AABAA - true
//AB - false
//Aa - true
//!!!!!A&7779790 - true
//"" - true

//TODO Добавить нечувствительность к регистру
//TODO Добавить нечувствительность к небуквенным символам

bool isLetter(char ch)
{
    return ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90));
}

bool charsEqualWithoutMatchCase(char first, char second)
{
    return first == second || abs(first - second) == 32;
}

bool IsPalindrome(const std::string& s)
{
    if (s.size() == 0)
        return true;

    int i = 0;
    int j = s.size() - 1;

    while (i < j)
    {
        while (i < s.size() && !isLetter(s.at(i)))
            i++;

        while (j >= 0 && !isLetter(s.at(j)))
            j--;

        if (i >= j)
            return true;

        if (!charsEqualWithoutMatchCase(s.at(i), s.at(j)))
            return false;

        i++;
        j--;
    }

    return true;
}

void IsPalindromeTest()
{
    std::vector<std::string> testStrings{
        "",
        "aa",
        "aba",
        "aac",
        "!!!!!A&7779790",
        "987361a78a",
        "717171992",
        "Aa",
        "AaAb",
        "aA96786B88b",
        "a818B00b11A"
    };

    for (const auto& str : testStrings)
		std::cout << "String: " << str << " Is a palindrome: " << IsPalindrome(str) << std::endl;
}

