#include <math.h>
#include <limits.h>

int reverse(int x)
{
    int rev = x % 10;
    x /= 10;

    while (x >= 10 || x <= -10)
    {
        rev = rev * 10 + x % 10;
        x /= 10;
    }

    if ((rev > INT32_MAX / 10 ||
         (rev == INT32_MAX / 10 && x > 7) ||
         rev < INT32_MIN / 10 ||
         (rev == INT32_MIN / 10 && x < -8)))
    {
        return 0;
    }

    if (x != 0)
    {
        rev = rev * 10 + x % 10;
    }

    return rev;
}