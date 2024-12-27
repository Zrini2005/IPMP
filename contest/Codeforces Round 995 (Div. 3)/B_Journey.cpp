#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        long long n, a, b, c;
        cin >> n >> a >> b >> c; // Total distance and distances for 3 days

        long long cycleSum = a + b + c; // Total distance covered in one cycle
        long long fullCycles = n / cycleSum; // Number of full cycles
        long long remainingDistance = n % cycleSum; // Distance left after full cycles

        long long days = fullCycles * 3; // Days covered by full cycles

        if (remainingDistance > 0) {
            days++;
            remainingDistance -= a;
        }
        if (remainingDistance > 0) {
            days++;
            remainingDistance -= b;
        }
        if (remainingDistance > 0) {
            days++;
        }

        cout << days << endl;
    }

    return 0;
}
