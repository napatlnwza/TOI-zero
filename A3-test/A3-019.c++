#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, L;
    cin >> N >> L;
    vector<long long> H(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> H[i];
    }
    vector<int> A(L + 1);
    for (int i = 1; i <= L; i++) {
        cin >> A[i];
    }
    // สร้าง prefix maximum
    vector<long long> MAX(N + 1);
    MAX[1] = H[1];
    for (int i = 2; i <= N; i++) {
        MAX[i] = max(MAX[i - 1], H[i]);
    }
    // ตอบคำถามลูกค้าแต่ละคน
    for (int i = 1; i <= L; i++) {
        int pos = A[i];

        if (pos == 1) {
            cout << 0 << endl;
        } else {
            long long frontMax = MAX[pos - 1];
            if (H[pos] > frontMax) {
                cout << 0 << endl;
            } else {
                cout << (frontMax + 1) - H[pos] << endl;
            }
        }
    }
    return 0;
}
