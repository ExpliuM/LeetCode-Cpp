#include <iomanip>
#include <iostream>
#include <vector>

#include "./median-of-two-sorted-arrays.hpp"

using namespace std;

int main()
{
    int array1Size;
    cin >> array1Size;

    vector<int> sortedIntVector1;

    for (int i = 0; i < array1Size; i++)
    {
        int tmpInteger;
        cin >> tmpInteger;
        sortedIntVector1.push_back(tmpInteger);
    }

    int array2Size;
    cin >> array2Size;
    vector<int> sortedIntVector2;
    for (int i = 0; i < array2Size; i++)
    {
        int tmpInteger;
        cin >> tmpInteger;
        sortedIntVector2.push_back(tmpInteger);
    }

    double res = findMedianSortedArrays(sortedIntVector1, sortedIntVector2);
    cout << setprecision(5) << res;
}
