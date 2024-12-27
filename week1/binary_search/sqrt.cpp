class Solution {
public:
    int mySqrt(int x) {
        // For special cases when x is 0 or 1, return x.
        if (x == 0 || x == 1)
            return x;
         
        int start = 1;
        int end = x; 
         
        while (start <= end) { 
            long long mid = start + (end - start) / 2; 
            long long square = mid*mid; 
            if (square > x)
                end = mid - 1;
            else if (square == x) 
                return mid;
            else 
                start = mid + 1;
        } 
        return end;
    }
};