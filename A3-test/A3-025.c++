#include <iostream>
using namespace std;

int main() {
    int vote[100005];
    for (int i=0;i<100005;i++) {
        vote[i]=0;
    }
    int n,w,l;
    cin >> n >> w >> l;
    for (int i=1;i<=n;i++) {
        int h;
        cin >> h;
        int temp[100005];
        for (int j=0;j<100005;j++) {
            temp[j]=0;
        }
        for (int j=0;j<h;j++) {
            int k;
            cin >> k;
            for (int pos=k-l;pos<=k+l;pos++) {
                if (pos >= 1 && pos <= w) {
                    temp[pos]=1;
                }
            }
        }
        for (int j=1;j<=w;j++) {
            vote[j]+=temp[j];
        }
    }
    for (int i=0;i<100005;i++) {
        if (vote[i] == n) {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}