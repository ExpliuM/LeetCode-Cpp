#include <vector>
#include <iostream>

#include "is_palindrome.hpp"

using namespace std;

bool isPalindrome(int x)
{
    if (x < 0)
    {
        return false;
    }

    bool res = true;

    long high = 1;
    while (x >= high)
        high *= 10;

    high /= 10;

    while (res && x > 0 && high >= 10)
    {
        res = (x / high == x % 10);
        x %= high;
        x /= 10;
        high /= 100;
    }

    return res;
}
