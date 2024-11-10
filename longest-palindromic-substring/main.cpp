#include <algorithm>
#include <iomanip>
#include <iostream>
#include <unordered_set>
#include <vector>

#include "./longest-palindromic-substring.hpp"

using namespace std;

int main()
{
    int numberOfStrings;
    cin >> numberOfStrings;

    for (int i = 0; i < numberOfStrings; i++)
    {
        string s;
        cin >> s;
        cout << longestPalindrome(s) << endl;
    }
}