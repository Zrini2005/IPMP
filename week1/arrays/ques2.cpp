class Solution {
public:
    bool check(vector<int>& nums) {
        int min =0;
        for(int i =0 ;i<nums.size();i++){
            if(nums[i]>nums[(i+1)%nums.size()]) min++;
        }
        return min<=1  ;
    }
};