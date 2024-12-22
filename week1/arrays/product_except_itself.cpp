class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        int flag =0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==0){
                flag++;
            }
            else{
            prod*=nums[i];
            }
        }
        for(int i =0;i<nums.size();i++){
            if(flag ==0){
            nums[i]=prod/nums[i];
            }
            else if(flag ==1){
            if(nums[i]!=0){
                nums[i]=0;
            }
            else nums[i] = prod;
            }
            else nums[i]=0;
        }
        return nums;
        
    }
};