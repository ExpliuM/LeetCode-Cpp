#include <vector>
#include <map>
#include <iostream>

#include "./two_sum.hpp"

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> result;
    unordered_map<int, int> map;

    for (int idx1 = 0; idx1 < nums.size(); ++idx1)
    {
        if (map.find(target - nums[idx1]) == map.end())
        {
            map[nums[idx1]] = idx1;
        }
        else
        {
            result.push_back(map[target - nums[idx1]]);
            result.push_back(idx1);
            break;
        }
    }

    return result;
}
