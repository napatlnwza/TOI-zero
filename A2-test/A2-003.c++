#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> num;
    for (int i=1;i<=n;i++) {
        int a;
        cin >> a;
        num.push_back(a);
    }
    int count=0;
    for (int i=0;i<n;i++) {
        if (i==0) {
            if (n==1 || num[i] > num[i+1]) {
                count++;
                continue;
            }
        }
        else if (i==n-1) { 
            if (num[i] > num[i-1]) {
                count++;
                break;
            }
        }
        else if (num[i] > num[i+1] && num[i] > num[i-1]) {
            count++;
        }
    }
    cout << count;
    return 0;
}