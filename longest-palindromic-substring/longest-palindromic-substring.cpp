#include <algorithm>
#include <iomanip>
#include <iostream>
#include <unordered_set>
#include <vector>

#include "./longest-palindromic-substring.hpp"

using namespace std;

bool isPalindrome(string s);
string longestPalindromeAux(string s);
void palindromeExpand(string s, int &startIndex, int &length);

bool isPalindrome(string s)
{
    for (size_t i = 0; i < (s.size() + 1) / 2; ++i)
    {
        if (s[i] != s[s.size() - i - 1])
        {
            return false;
        }
    }
    return true;
}

string longestPalindrome(string s)
{
    if (s.size() == 1)
    {
        return s;
    }

    return longestPalindromeAux(s);
}

string longestPalindromeAux(string s)
{
    int sLength = s.size();
    int center = floor(((double)sLength - 1) / 2);
    int deltaFromCenter = 0;

    int longestLength = 0;
    int longestStartIndex = 0;

    while (center - deltaFromCenter + 1 >= longestLength / 2)
    {
        // Left from center
        int startIndex1 = center - deltaFromCenter + 1;
        int length1 = 0;
        palindromeExpand(s, startIndex1, length1);

        if (length1 > longestLength)
        {
            longestLength = length1;
            longestStartIndex = startIndex1;
        }

        startIndex1 = center - deltaFromCenter;
        length1 = 1;
        palindromeExpand(s, startIndex1, length1);

        if (length1 > longestLength)
        {
            longestLength = length1;
            longestStartIndex = startIndex1;
        }

        startIndex1 = center + deltaFromCenter;
        length1 = 0;
        palindromeExpand(s, startIndex1, length1);

        if (length1 > longestLength)
        {
            longestLength = length1;
            longestStartIndex = startIndex1;
        }

        startIndex1 = center + deltaFromCenter;
        length1 = 1;
        palindromeExpand(s, startIndex1, length1);

        if (length1 > longestLength)
        {
            longestLength = length1;
            longestStartIndex = startIndex1;
        }

        ++deltaFromCenter;
    }

    return s.substr(longestStartIndex, longestLength);
}

void palindromeExpand(string s, int &startIndex, int &length)
{
    int sLength = s.size();

    if (!isPalindrome(s.substr(startIndex, length)))
    {
        length = -1;
        startIndex = 0;
        return;
    }

    while (
        startIndex - 1 >= 0 &&
        startIndex + length < sLength &&
        s[startIndex - 1] == s[startIndex + length])
    {
        length += 2;
        --startIndex;
    }
}
