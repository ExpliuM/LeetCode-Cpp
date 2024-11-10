
/*
 * Link: https://leetcode.com/problems/longest-common-prefix/
 */

#include <gtest/gtest.h>
#include <string>
#include <vector>

#include "longest-common-prefix.hpp"

using namespace std;

TEST(leetcode, longest_common_prefix)
{
    // UC 1
    vector<string> vector1 = {"flower", "flow", "flight"};
    string expectedValue1 = "fl";

    string result = longestCommonPrefix(vector1);
    EXPECT_EQ(result, expectedValue1);

    // UC 2
    vector<string> vector2 = {"dog", "racecar", "car"};
    string expectedValue2 = "";

    result = longestCommonPrefix(vector2);
    EXPECT_EQ(result, expectedValue2);

    // UC 3
    vector<string> vector3 = {"dog", "dog", "dog"};
    string expectedValue3 = "dog";

    result = longestCommonPrefix(vector3);
    EXPECT_EQ(result, expectedValue3);

    // UC 4
    vector<string> vector4 = {"dog", "do", "dog"};
    string expectedValue4 = "do";

    result = longestCommonPrefix(vector4);
    EXPECT_EQ(result, expectedValue4);
}