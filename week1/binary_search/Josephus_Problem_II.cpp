#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;

    vector<int> children;
    for (int i = 1; i <= n; ++i) {
        children.push_back(i);
    }

    int idx = 0;  
    vector<int> removalOrder;

    while (!children.empty()) {
        idx = (idx + k + 1) % children.size();  
        removalOrder.push_back(children[idx]);
        children.erase(children.begin() + idx);  
    }

    for (int child : removalOrder) {
        cout << child << " ";
    }

    return 0;
}
