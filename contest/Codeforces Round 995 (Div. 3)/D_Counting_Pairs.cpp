#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;

        vector<long long> a(n);
        long long totalSum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            totalSum += a[i];
        }

        sort(a.begin(), a.end()); // Sort the array to enable binary search

        long long count = 0;

        for (int i = 0; i < n; ++i) {
            long long targetLow = totalSum - a[i] - y; // Minimum value needed for the pair
            long long targetHigh = totalSum - a[i] - x; // Maximum value allowed for the pair

            // Find the range of valid pairs
            auto lowIt = lower_bound(a.begin(), a.begin() + i, targetLow);
            auto highIt = upper_bound(a.begin(), a.begin() + i, targetHigh);

            count += (highIt - lowIt);
        }

        cout << count << endl;
    }

    return 0;
}
    