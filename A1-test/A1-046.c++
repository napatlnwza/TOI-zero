#include <iostream>
using namespace std;

int main() {
    int n,even=0,odd=0,sum=0;
    cin >> n;
    for (int i=1;i<=n;i++) {
        int c;
        cin >> c;
        sum+=c;
        if (c % 2 == 0) even++;
        else odd++;
    }
    cout << "SUM " << sum << endl;
    cout << "EVEN " << even << endl;
    cout << "ODD " << odd << endl;
    return 0;
}