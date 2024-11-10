#include <iostream>
#include <unordered_set>
#include <vector>

#include "./longest-substring-without-repeating-characters.hpp"

using namespace std;

int lengthOfLongestSubstring(string s)
{
    if (s.size() == 0)
    {
        return 0;
    }

    const int numberOfLetters = 255;
    vector<int> charCountHash(numberOfLetters, 0);

    int index1 = 0;
    int index2 = 0;
    int maxLength = 1;

    charCountHash[s[index1]] = 1;

    while (++index2 < s.size())
    {
        if (charCountHash[s[index2]] > index1)
        {
            index1 = charCountHash[s[index2]];
        }
        charCountHash[s[index2]] = index2 + 1;
        maxLength = max(index2 - index1 + 1, maxLength);
    }

    return maxLength;
}
