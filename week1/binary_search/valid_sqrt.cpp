class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)return true;
        int low =1;
        int high =num/2;
        while(low<=high){
            long long mid =(long long)(low+high)/2;
            long long sq=mid*mid;
            if(sq==num) return true;
            else if(sq>num){
                high = mid-1;

            }
            else{
                low = mid+1;
            }
        }
        return false;
    }
};