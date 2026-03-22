#include <iostream>
using namespace std;

int main() {
    int base,bonus,stack;
    cin >> base;
    cin >> bonus;
    cin >> stack;
    double sum;
    if (stack <= 3) sum=base+bonus;
    else if (stack > 3) sum=(base+bonus)*1.5;
    cout << sum << endl;
    if (sum >= 1500) {
        cout << 5 << endl;
        if (stack >= 7) {
            cout << 99;
            return 0;
        }
    }
    else if (sum >= 1000 && sum < 1500) {
        cout << 4 << endl;
        if (bonus >= 300) {
            cout << 88;
            return 0;
        }
    }
    else if (sum >= 500 && sum < 1000) cout << 3 << endl;
    else if (sum >= 200 && sum < 500) cout << 2 << endl;
    else if (sum < 200) cout << 1 << endl;
    cout << 0;
    return 0;
}