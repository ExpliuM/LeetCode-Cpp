
/*
 * Link: https://leetcode.com/problems/longest-common-prefix/
 * Submission: https://leetcode.com/problems/longest-common-prefix/submissions/1448811705/
 */

#include <gtest/gtest.h>
#include <string>
#include <vector>

#include "longest-common-prefix.hpp"

using namespace std;

TEST(leetcode, longest_common_prefix)
{
    // UC 1
    vector<string> strs = {"flower", "flow", "flight"};
    string expected = "fl";

    string result = longestCommonPrefix(strs);
    EXPECT_EQ(result, expected);

    // UC 2
    strs = {"dog", "racecar", "car"};
    expected = "";

    result = longestCommonPrefix(strs);
    EXPECT_EQ(result, expected);

    // UC 3
    strs = {"dog", "dog", "dog"};
    expected = "dog";

    result = longestCommonPrefix(strs);
    EXPECT_EQ(result, expected);

    // UC 4
    strs = {"dog", "do", "dog"};
    expected = "do";

    result = longestCommonPrefix(strs);
    EXPECT_EQ(result, expected);

    // UC 5
    strs = {"dog"};
    expected = "dog";

    result = longestCommonPrefix(strs);
    EXPECT_EQ(result, expected);

    // UC 6
    strs = {""};
    expected = "";

    result = longestCommonPrefix(strs);
    EXPECT_EQ(result, expected);
}