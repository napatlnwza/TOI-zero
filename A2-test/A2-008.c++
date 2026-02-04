#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> value;
    for (int i=0;i<n;i++) {
        int a,b;
        cin >> a >> b;
        value.push_back(b);
    }
    int count=0;
    int max=-99;
    for (int i=n-1;i>=0;i--) {
        if (value[i] > max) {
            max=value[i];
        }
        else if (max > value[i]) {
            count+=1;
        }
    }
    cout << count;
    return 0;
}