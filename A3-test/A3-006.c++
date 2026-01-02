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

    // เรียงระยะทางจากมากไปน้อย
    sort(X.begin(), X.end(), greater<long long>());

    vector<long long> cost;

    // สร้าง cost ต่อกิโลเมตรของทุกเที่ยวบิน
    for (int i = 1; i <= 200; i++) {
        // 9 เที่ยวไป-กลับ
        for (int k = 0; k < 9; k++) {
            cost.push_back(2LL * i);
        }
        // เที่ยวสุดท้าย (ไปอย่างเดียว)
        cost.push_back(1LL * i);
    }

    // เรียง cost จากน้อยไปมาก
    sort(cost.begin(), cost.end());

    long long ans = 0;

    // จับคู่ระยะไกลกับ cost ถูก
    for (int i = 0; i < N; i++) {
        ans += X[i] * cost[i];
    }

    cout << ans << endl;
    return 0;
}
