#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Number of days

        int maxDifference = 0;
        int prev_a, prev_b;
        cin >> prev_a; // Read first day for Monocarp
        cin >> prev_b; // Read first day for Stereocarp
        int x;

        for (int i = 1; i < n; ++i) {
            int a, b;
           
            cin >> a >> b; // Read the ith day problems solved by both
            

            if (prev_a > b) {
                maxDifference += prev_a - b;
            }
            prev_a = a;
            prev_b = b;
        }

        maxDifference += prev_a; // Adding the last day for Monocarp

        cout << maxDifference << endl;
    }

    return 0;
}

