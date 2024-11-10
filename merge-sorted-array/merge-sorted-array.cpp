#include "merge-sorted-array.hpp"
#include <vector>

using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int index = --n + m--;
    while (n >= 0)
    {
        if (m >= 0 && nums1[m] > nums2[n])
        {
            nums1[index--] = nums1[m--];
        }
        else
        {
            nums1[index--] = nums2[n--];
        }
    }
}