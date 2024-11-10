#include "divide-two-integers.hpp"

#include <cstdlib>

using namespace std;

int divide(int dividend, int divisor)
{
    if (dividend == 0)
    {
        return 0;
    }

    if (divisor == INT32_MIN)
    {
        if (dividend == INT32_MIN)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    bool sign = true;
    if ((dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0))
    {
        sign = false;
    }

    if (dividend < 0 && dividend != INT32_MIN)
    {
        dividend = -dividend;
    }

    if (divisor < 0)
    {
        divisor = -divisor;
    }

    int count = 0;
    int result = 0;

    int index = 0;
    while ((dividend >> index) != 1 && (dividend >> index) != -1)
    {
        ++index;
    }

    for (; index >= 0; --index)
    {
        result = (result << 1) | ((dividend >> index) & 0b1);
        count = count << 1;

        if (result >= divisor)
        {
            result -= divisor;
            ++count;
        }
        else if (result == INT32_MIN)
        {
            ++count;
        }
    }

    if (sign)
    {
        if (count == INT32_MIN)
        {
            return INT32_MIN;
        }
        return ~count + 1;
    }

    if (count == INT32_MIN)
    {
        return INT32_MAX;
    }
    return count;
}
