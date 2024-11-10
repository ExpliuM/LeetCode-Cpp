#include "remove-letter-to-equalize-frequency.hpp"

#include <unordered_map>
#include <map>

using namespace std;

bool equalFrequency(string word)
{
    std::map<char, int> letterMap;

    for (char letter : word)
    {
        if (letterMap.find(letter) != letterMap.end())
        {
            ++letterMap[letter];
        }
        else
        {
            letterMap[letter] = 1;
        }
    }

    std::map<int, int> countMap;

    for (const auto &pair : letterMap)
    {
        if (countMap.find(pair.second) != countMap.end())
        {
            ++countMap[pair.second];
        }
        else
        {
            countMap[pair.second] = 1;
        }
    }

    if (countMap.size() > 2)
    {
        return false;
    }

    if (countMap.find(1) != countMap.end())
    {
        if (countMap[1] == letterMap.size())
        {
            return true;
        }

        if (countMap[1] == 1)
        {
            return true;
        }
    }

    if (countMap.size() == 1 && countMap.begin()->second == 1)
    {
        return true;
    }

    if (abs(countMap.begin()->first - countMap.rbegin()->first) == 1 &&
        countMap.rbegin()->second == 1)
    {
        return true;
    }
    return false;
}