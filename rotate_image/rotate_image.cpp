#include "./rotate_image.hpp"

using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    int length = matrix.size() - 1;
    int halfLength = (length + 1) / 2;
    int tmp;
    for (int diagOffset = 0; diagOffset < halfLength; ++diagOffset)
    {
        for (int offset = 0; offset < length - diagOffset * 2; ++offset)
        {
            tmp = matrix[diagOffset][diagOffset + offset];
            matrix[diagOffset][diagOffset + offset] = matrix[length - diagOffset - offset][diagOffset];
            matrix[length - offset - diagOffset][diagOffset] = matrix[length - diagOffset][length - diagOffset - offset];
            matrix[length - diagOffset][length - diagOffset - offset] = matrix[diagOffset + offset][length - diagOffset];
            matrix[offset + diagOffset][length - diagOffset] = tmp;
        }
    }
}