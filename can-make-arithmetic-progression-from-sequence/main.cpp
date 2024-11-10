#include <iostream>
#include <unordered_set>
#include <vector>

#include "./can-make-arithmetic-progression-from-sequence.hpp"

using namespace std;

int main()
{
    int arraySize;

    cin >> arraySize;
    vector<int> intVector;
    for (int i = 0; i < arraySize; i++)
    {
        int tmpInteger;
        cin >> tmpInteger;
        intVector.push_back(tmpInteger);
    }

    bool res = canMakeArithmeticProgression(intVector);
    if (res)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
