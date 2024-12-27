class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left =1;
        if(piles.size()==1) return ceil(static_cast<double>(piles[0])/h);
        int right = *max_element(piles.begin(),piles.end());
        int result =0;
        while(left<=right){
            int mid = (left+right)/2;
            long ans=0;
            for(int i =0;i<piles.size();i++){
                ans+=ceil(static_cast<double>(piles[i])/mid);
            }
            if(ans<=h){
                result = mid;
                right = mid-1;
            }
            else if (ans>h){
                left = mid+1;
            }
        }
        return result;
    }
};