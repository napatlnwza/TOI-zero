#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=0;i<n;i++) {
        if (i==n-1) {
            for (int k=1;k<=n;k++) {
                cout << 0 << " ";
            }
            break;
        }
        for (int j=0;j<=i;j++) {
            if (j==0 || j==i) {
                cout << 0 << " ";
            }
            else {
                cout << 1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}