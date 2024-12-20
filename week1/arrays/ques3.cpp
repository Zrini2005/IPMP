class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int same = nums[0];
        int ans= 0;
        for(int i =1; i<nums.size();i++){
            if(nums[i]==same) continue;
            else{
                same = nums[i];
                ans++;
                nums[ans] = nums[i]; 
            }
        }
        return ans +1;
    }
};