class Solution {
public:
    bool canMakeBouquets(vector<int>& bloomDay, int days, int m, int k) {
        int bouquets = 0, flowers = 0;
        
        for (int bloom : bloomDay) {
            if (bloom <= days) {
                flowers++;
                if (flowers == k) {
                    bouquets++;
                    flowers = 0;
                }
            } else {
                flowers = 0;
            }
        }
        
        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if (m * k > n) return -1;

        int left = 1, right = *max_element(bloomDay.begin(), bloomDay.end());
        int result = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canMakeBouquets(bloomDay, mid, m, k)) {
                result = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return result;
    }
};
