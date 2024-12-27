class Solution {
public:
    int arrangeCoins(int n) {
        int sum = n;
        int start =0,last = sum;
        int ans=0;
        while(start<=last){
            long long mid = start + (last-start)/2;
            long long msum = mid*(mid+1)/2;
            if(msum>sum){
                last = mid-1;
            }
            else if(msum<sum){
                ans= mid;
                start = mid+1;
            }
            else{
                return mid;
            }
        }
        return ans;
    }
};