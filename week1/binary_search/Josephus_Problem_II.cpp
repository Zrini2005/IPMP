#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;

    // for (int i = 1; i <= n; ++i) {
    //     children.push_back(i);
    // }

    int idx = 0;   

    while (!children.empty()) {
        idx = (idx + k + 1);
        if(idx >= n) {
            idx = idx % n;
        }
        cout<< idx << " ";
    }

    

    return 0;
}
