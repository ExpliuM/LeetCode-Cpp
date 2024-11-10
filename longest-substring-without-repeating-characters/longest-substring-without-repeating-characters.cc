
/*
 * Link: https://leetcode.com/problems/longest-substring-without-repeating-characters
 */

#include <filesystem>
#include <fstream>
#include <gtest/gtest.h>

#include "longest-substring-without-repeating-characters.hpp"

using namespace std;

TEST(leetcode, longest_substring_without_repeating_characters)
{
  EXPECT_EQ(lengthOfLongestSubstring("abcabcbb"), 3);
  EXPECT_EQ(lengthOfLongestSubstring("bbbbb"), 1);
  EXPECT_EQ(lengthOfLongestSubstring("pwwkew"), 3);
  EXPECT_EQ(lengthOfLongestSubstring(" "), 1);
  EXPECT_EQ(lengthOfLongestSubstring(""), 0);
  EXPECT_EQ(lengthOfLongestSubstring("abba"), 2);
}