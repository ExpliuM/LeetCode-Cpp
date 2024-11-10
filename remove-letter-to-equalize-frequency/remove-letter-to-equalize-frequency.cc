
/*
 * Link: https://leetcode.com/problems/remove-letter-to-equalize-frequency/description/
 */

#include <gtest/gtest.h>
#include <string>
#include <vector>

#include "remove-letter-to-equalize-frequency.hpp"

using namespace std;

TEST(leetcode, remove_letter_to_equalize_frequency)
{
  vector<string> trueCases = {"abcc", "bac", "abbcc", "abb", "zz"};
  for (const string &trueCase : trueCases)
  {
    EXPECT_TRUE(equalFrequency(trueCase)) << "equalFrequency called with: " << trueCase;
  }

  vector<string> falseCases = {"aazz", "ddaccb"};
  for (const string &falseCase : falseCases)
  {
    EXPECT_FALSE(equalFrequency(falseCase)) << "equalFrequency called with: " << falseCase;
  }
}