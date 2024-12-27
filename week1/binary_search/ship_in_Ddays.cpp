class Solution
{
public:
    int shipWithinDays(vector<int> &weights, int days)
    {
        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);
        int res;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            int day = 1;
            int capacity = 0;
            for (const int weight : weights)
            {
                if (capacity + weight > mid)
                {
                    ++day;
                    capacity = weight;
                }
                else
                {
                    capacity += weight;
                }
            }
            if (day <= days)
            {
                res = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return res;
    }
};