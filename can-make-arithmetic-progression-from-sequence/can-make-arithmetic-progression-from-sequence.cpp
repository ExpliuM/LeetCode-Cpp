#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

bool canMakeArithmeticProgression(vector<int> &arr)
{
    int minValue = *min_element(arr.begin(), arr.end());
    int maxValue = *max_element(arr.begin(), arr.end());
    int n = arr.size();

    if (maxValue - minValue == 0)
    {
        return true;
    }

    if ((maxValue - minValue) % (n - 1) != 0)
    {
        return false;
    }

    int diff = (maxValue - minValue) / (n - 1);
    unordered_set<int> numberSet;

    for (int i = 0; i < n; i++)
    {
        if ((arr[i] - minValue) % diff != 0)
        {
            return false;
        }
        numberSet.insert(arr[i]);
    }

    return numberSet.size() == n;
}

