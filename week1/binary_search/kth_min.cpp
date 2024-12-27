class Solution {
public:
    int findMin(vector<int> nums) {
        // If array contains only one element, return it directly
        if (nums.size() == 1) {
            return nums[0];
        }

        int left = 0;
        int right = nums.size() - 1;

        // If the array is not rotated, the first element is the minimum
        if (nums[0] < nums[right]) {
            return nums[0];
        }

        // Perform binary search to find the minimum element
        while (left <= right) {
            int mid = left + (right - left) / 2;  // To avoid overflow

            // If the middle element is greater than the next element, the next element is the minimum
            if (nums[mid] > nums[mid + 1]) {
                return nums[mid + 1];
            }

            // If the middle element is smaller than the previous element, the middle element is the minimum
            if (nums[mid - 1] > nums[mid]) {
                return nums[mid];
            }

            // If the left half is sorted, the minimum is in the right half
            if (nums[0] < nums[mid]) {
                left = mid + 1;
            } else {
                // If the right half is sorted, the minimum is in the left half
                right = mid - 1;
            }
        }

        // Return -1 if no minimum was found (should never happen in a rotated sorted array)
        return -1;
    }
};