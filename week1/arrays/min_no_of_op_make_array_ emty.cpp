class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto a: nums){
            m[a]++;
        }
        int ans=0;
        for(auto i:m){
            if(i.second>=3){
                ans+=i.second/3;
            }
            if(i.second%3==2 || i.second%3==1){
                ans++;
            }
            if(i.second==1){ 
                return -1;
            }

        }
        return ans;
        
    }
};