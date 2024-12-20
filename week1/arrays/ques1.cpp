class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int max = -1;
        int max2 = -1;
        for(int i =0;i<arr.size();i++){
            if(arr[i]>max){
                max2 = max;
                max = arr[i];
            }
            if(arr[i]<max && arr[i]>max2){
                max2 = arr[i];
            }
            
        }
        return max2;
    }
};