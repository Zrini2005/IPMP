#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(), cols = matrix[0].size();
        int count = 0;

        // Compute prefix sums for each row
        for (int i = 0; i < rows; ++i) {
            for (int j = 1; j < cols; ++j) {
                matrix[i][j] += matrix[i][j - 1];
            }
        }

        // Iterate over all pairs of columns
        for (int colStart = 0; colStart < cols; ++colStart) {
            for (int colEnd = colStart; colEnd < cols; ++colEnd) {
                unordered_map<int, int> prefixSumMap;
                prefixSumMap[0] = 1; // Initialize for submatrices starting at the current column
                int currSum = 0;

                for (int row = 0; row < rows; ++row) {
                    // Calculate the sum for the current row between colStart and colEnd
                    currSum += matrix[row][colEnd] - (colStart > 0 ? matrix[row][colStart - 1] : 0);

                    // Check if there's a submatrix sum that matches the target
                    if (prefixSumMap.count(currSum - target)) {
                        count += prefixSumMap[currSum - target];
                    }

                    // Update the hash map with the current cumulative sum
                    prefixSumMap[currSum]++;
                }
            }
        }

        return count;
    }
};