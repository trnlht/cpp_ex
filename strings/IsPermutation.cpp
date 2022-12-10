//
// Created by trnlht on 10.12.2022.
//

#include "IsPermutation.h"

#include <map>
#include <cassert>
#include <iostream>

bool is_permutation(const std::string& s1, const std::string& s2)
{
    if(s1.size() != s2.size())
        return false;

    std::map<char, int> char_counters;

    for(char ch : s1)
        char_counters[ch]++;

    for(char ch : s2)
        char_counters[ch]--;

    for(const auto& pair : char_counters)
        if(pair.second != 0)
            return false;

    return true;
}

void is_permutation_tests()
{
   assert(is_permutation("", ""));
   assert(is_permutation("aab", "aba"));
   assert(is_permutation("abcdef", "fedcba"));

   assert(!is_permutation("aaa", "aba"));
   assert(!is_permutation("aaaa", "aba"));
   assert(!is_permutation("abc", "def"));


   std::cout << "is_permutation_tests: success";
}
