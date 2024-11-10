#include <algorithm>
#include <iomanip>
#include <iostream>
#include <unordered_set>
#include <vector>

#include "./longest-substring-without-repeating-characters.hpp"

using namespace std;

int main()
{
    string s;
    cin >> s;
    cout << lengthOfLongestSubstring(s);
}