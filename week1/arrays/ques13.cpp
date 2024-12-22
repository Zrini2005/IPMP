class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int> count;

        for (int num : nums) {
            count[num]++;
        }

        int i = 0;
        for (int color = 0; color < 3; color++) {
            int freq = count[color];
            for (int j = 0; j < freq; j++) {
                nums[i] = color;
                i++;
            }
        }        
    }
};