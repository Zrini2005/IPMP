class Solution {
public:
bool isValid(vector<int>& nums, long long n, long long k, long long mid) {
    long long partitions = 1, runningSum = 0;
    for (int i = 0; i < n; i++) {
        runningSum += nums[i];
        if (runningSum > mid) {
            runningSum = nums[i];
            partitions++;
            if (partitions > k) return false;
        }
    }
    return true; 
}
    int splitArray(vector<int>& nums, int k) {
    long long low = *max_element(nums.begin(), nums.end()), 
    high = accumulate(nums.begin(), nums.end(), 0);
    long long ans = 0;
    long long n=nums.size();
    while (low <= high) {
        long long mid = (low + high) / 2;
        if (isValid(nums, n, k, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

    };