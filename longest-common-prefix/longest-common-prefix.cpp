#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

#include "longest-common-prefix.hpp"

using namespace std;

std::string longestCommonPrefix(std::vector<std::string> &strs)
{

    int numberOfStrings = strs.size();

    int maxIndex = strs[0].size();
    for (int stringIndex = 1; stringIndex < numberOfStrings - 1; ++stringIndex)
    {
        maxIndex = min(maxIndex, (int)strs[stringIndex].size());
    }

    if (numberOfStrings == 1)
    {
        return strs[0];
    }
    int index = 0;
    for (; index < maxIndex; ++index)
    {
        for (int stringIndex = 1; stringIndex < numberOfStrings; ++stringIndex)
        {
            if (strs[0][index] != strs[stringIndex][index])
            {
                return strs[0].substr(0, max(index, 0));
            }
        }
    }

    return strs[0].substr(0, index);
}