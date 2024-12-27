int Solution::solve(vector<int> &A, int B) {
    unordered_map<int, int> prefixXorCount;
    int prefixXor = 0, count = 0;

    for (int i = 0; i < A.size(); ++i) {
        // Update the prefix XOR
        prefixXor ^= A[i];

        // Check if the current prefixXor itself equals the target B
        if (prefixXor == B) {
            count++;
        }

        // Check if (prefixXor ^ B) exists in the map
        // This implies a subarray with XOR equal to B exists
        if (prefixXorCount.find(prefixXor ^ B) != prefixXorCount.end()) {
            count += prefixXorCount[prefixXor ^ B];
        }

        // Increment the frequency of the current prefixXor
        prefixXorCount[prefixXor]++;
    }

    return count;
}