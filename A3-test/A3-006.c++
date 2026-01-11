#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> X(N);
    for (int i = 0; i < N; i++) {
        cin >> X[i];
    }
    sort(X.begin(), X.end(), greater<long long>());

    vector<long long> cost;

    for (int i = 1; i <= 200; i++) {
        for (int k = 0; k < 9; k++) {
            cost.push_back(2LL * i);
        }
        cost.push_back(1LL * i);
    }

    sort(cost.begin(), cost.end());

    long long ans = 0;

    for (int i = 0; i < N; i++) {
        ans += X[i] * cost[i];
    }

    cout << ans << endl;
    return 0;
}
