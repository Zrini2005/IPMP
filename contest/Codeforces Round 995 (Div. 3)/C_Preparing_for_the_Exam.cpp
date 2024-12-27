#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(m); // Indices of missing questions for each list
        for (int i = 0; i < m; ++i) {
            cin >> a[i];
        }

        unordered_set<int> q; // Set of questions Monocarp knows
        for (int i = 0; i < k; ++i) {
            int question;
            cin >> question;
            q.insert(question);
        }

        if (n == k) {
            // Monocarp knows all questions
            for (int i = 0; i < m; ++i) {
                cout << "1";
            }
            cout << endl;
            continue;
        }

        if (n > k + 1) {
            // Monocarp cannot pass any list
            for (int i = 0; i < m; ++i) {
                cout << "0";
            }
            cout << endl;
            continue;
        }

        // n == k + 1 case
        for (int i = 0; i < m; ++i) {
            if (q.count(a[i]) > 0) {
                cout << "0"; // Monocarp knows the missing question
            } else {
                cout << "1"; // Monocarp does not know the missing question
            }
        }
        cout << endl;
    }

    return 0;
}
