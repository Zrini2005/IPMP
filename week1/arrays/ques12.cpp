class Solution {
  public:
    int lenOfLongestSubarr(const vector<int>& arr, int k) {
    unordered_map<int, int> prefixSumIndex; 
    int current_sum = 0;
    int max_length = 0;

    for (int i = 0; i < arr.size(); ++i) {
        current_sum += arr[i];

        if (current_sum == k) {
            max_length = i + 1;
        }
        if (prefixSumIndex.find(current_sum - k) != prefixSumIndex.end()) {
            max_length = max(max_length, i - prefixSumIndex[current_sum - k]);
        }
        if (prefixSumIndex.find(current_sum) == prefixSumIndex.end()) {
            prefixSumIndex[current_sum] = i;
        }
    }

    return max_length;
}
};