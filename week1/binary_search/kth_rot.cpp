//you could do this in binary search!!
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int n = arr.size();
    int start = 0, end = n - 1;

    // If the array is already sorted and not rotated
    if (arr[start] <= arr[end]) {
        return 0;
    }

    while (start <= end) {
        int mid = start + (end - start) / 2;

        // Check if mid is the smallest element
        if (mid > 0 && arr[mid] < arr[mid - 1]) {
            return mid; // Rotation count
        }

        // Decide the search space
        if (arr[mid] >= arr[start]) {
            // Smallest element is in the right half
            start = mid + 1;
        } else {
            // Smallest element is in the left half
            end = mid - 1;
        }
    }

    return 0; // Default case (should not be reached for valid input)
    }
};
