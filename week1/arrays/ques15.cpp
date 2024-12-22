class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        reverse(arr.begin(),arr.end());
        int max = INT_MIN;
        vector<int> ans;
        for(int i =0;i<arr.size();i++){
            if(arr[i] >= max){
                ans.push_back(arr[i]);
                max = arr[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};