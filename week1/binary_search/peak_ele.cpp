class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left =0;
        if(nums.size()==1) return 0;
        int right = nums.size()-1;
        if(nums[0]>nums[1]) return 0;
        if(nums[right]>nums[right-1]) return right;
        left =1,right--;
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]> nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }
            else if ( nums[mid]< nums[mid-1] && nums[mid]>nums[mid+1]){
                right = mid-1;

            }
            else {
                left = mid +1;
            }
            
            
        }
        return -1;
    }
};