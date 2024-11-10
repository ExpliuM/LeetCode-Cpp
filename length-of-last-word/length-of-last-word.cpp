#include "./length-of-last-word.hpp"

using namespace std;

int lengthOfLastWord(string s)
{
    const char *charPtr = s.c_str();
    int lastIndex = s.size();
    while (charPtr[--lastIndex] == ' ')
    {
    }

    int firstIndex = lastIndex - 1;
    while (firstIndex > 0 && charPtr[firstIndex] != ' ')
    {
        --firstIndex;
    }

    return lastIndex - firstIndex;
}