#include <gtest/gtest.h>

#include "./longest-palindromic-substring.hpp"

using namespace std;

TEST(longest_palindromic_substring, palindrome_expand)
{
    string s = "ccc";
    int startIndex = 1;
    int length = 1;
    palindromeExpand(s, startIndex, length);
    EXPECT_EQ(startIndex, 0);
    EXPECT_EQ(length, 3);
    EXPECT_EQ(s.substr(startIndex, length), "ccc");

    s = "abc";
    startIndex = 1;
    length = 1;
    palindromeExpand(s, startIndex, length);
    EXPECT_EQ(startIndex, 1);
    EXPECT_EQ(length, 1);
    EXPECT_EQ(s.substr(startIndex, length), "b");

    s = "abbc";
    startIndex = 1;
    length = 2;
    palindromeExpand(s, startIndex, length);
    EXPECT_EQ(startIndex, 1);
    EXPECT_EQ(length, 2);
    EXPECT_EQ(s.substr(startIndex, length), "bb");

    s = "abbc";
    startIndex = 1;
    length = 0;
    palindromeExpand(s, startIndex, length);
    EXPECT_EQ(startIndex, 1);
    EXPECT_EQ(length, 0);
    EXPECT_EQ(s.substr(startIndex, length), "");

    s = "abbc";
    startIndex = 2;
    length = 0;
    palindromeExpand(s, startIndex, length);
    EXPECT_EQ(startIndex, 1);
    EXPECT_EQ(length, 2);
    EXPECT_EQ(s.substr(startIndex, length), "bb");
}