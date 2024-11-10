#ifndef LONGEST_PALINDROME_SUBSTRING_H
#define LONGEST_PALINDROME_SUBSTRING_H

#include <string>

// Aux
bool isPalindrome(std::string s);
std::string longestPalindromeAux(std::string s);
void palindromeExpand(std::string s, int &startIndex, int &length);

// Main
std::string longestPalindrome(std::string s);

#endif // LONGEST_PALINDROME_SUBSTRING_H
