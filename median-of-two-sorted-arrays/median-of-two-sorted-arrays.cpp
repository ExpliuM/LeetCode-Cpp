#include <algorithm>
#include <iomanip>
#include <iostream>
#include <unordered_set>
#include <vector>

#include "./median-of-two-sorted-arrays.hpp"

using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    int length1 = nums1.size();
    int length2 = nums2.size();

    double medianNums1 = findMedianSortedArray(nums1);
    double medianNums2 = findMedianSortedArray(nums2);

    if (length1 == 0)
    {
        return medianNums2;
    }

    if (length2 == 0)
    {
        return medianNums1;
    }

    if (length1 == 1 && length2 == 1)
    {
        return ((double)(nums1[0] + nums2[0])) / 2;
    }

    if (length1 + length2 == 3)
    {
        for (auto num : nums2)
            nums1.push_back(num);
        sort(nums1.begin(), nums1.end());
        return nums1[1];
    }

    if (length1 + length2 == 4)
    {
        for (auto num : nums2)
            nums1.push_back(num);
        sort(nums1.begin(), nums1.end());
        return ((double)(nums1[1] + nums1[2])) / 2;
    }

    if (medianNums1 == medianNums2)
    {
        return medianNums1;
    }

    int indexMedianNum1 = findMedianIndexSortedArray(nums1);
    int indexMedianNum2 = findMedianIndexSortedArray(nums2);

    vector<int> subNums1;
    vector<int> subNums2;
    if (medianNums1 > medianNums2)
    {
        subNums1 = vector<int>(&nums1[0], &nums1[indexMedianNum1]);
        subNums2 = vector<int>(&nums2[indexMedianNum2], &nums2[length2]);
    }
    else
    {
        subNums1 = vector<int>(&nums1[indexMedianNum1], &nums1[length1]);
        subNums2 = vector<int>(&nums2[0], &nums2[indexMedianNum2]);
    }

    return findMedianSortedArrays(subNums1, subNums2);
}

int findMedianIndexSortedArray(vector<int> &nums)
{
    if (nums.size() == 0)
    {
        return -1;
    }

    return nums.size() / 2;
}

double findMedianSortedArray(vector<int> &nums)
{
    if (nums.size() == 0)
    {
        return -1;
    }

    int medianIndex = findMedianIndexSortedArray(nums);
    if (nums.size() % 2)
    {
        return nums[medianIndex];
    }
    else
    {
        return (double)(nums[medianIndex] + nums[medianIndex - 1]) / 2;
    }
}
