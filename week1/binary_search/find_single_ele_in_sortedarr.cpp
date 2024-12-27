class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left =0;
        if(nums.size()==1){
            return nums[0];
        }
        if(nums.size()==3){
            if(nums[0]==nums[1]){
                return nums[2];
            }
            else if ( nums[1]==nums[2]){
                return nums[0];
            }
        }
        if(nums[0]!=nums[1]){
            return nums[0];
        }
        if(nums[nums.size()-1]!= nums[nums.size()-2]){
            return nums[nums.size()-1];
        }
        int right = nums.size()-1;
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]==nums[mid-1] || nums[mid]==nums[mid+1]){
                if(nums[mid]==nums[mid-1]){
                    if(mid%2==1){
                        left = mid+1;
                    }
                    else{
                        right = mid -1;
                    }
                }
                else{
                    if(mid%2==0){
                        left = mid+1;
                    }
                    else{
                        right = mid -1;
                    }
                }

            }
            else{
                return nums[mid];
            }
        }
        return -1;
    }
};