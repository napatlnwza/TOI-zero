#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;
    if (n - 2 >= 1) {
        for (int i = 0; i < n - 2; i++) {
            cout << "*";
        }
    }
    cout << endl;
    if (n - 4 >= 1) {
        for (int i = 0; i < n - 4; i++) {
            cout << "*";
        }
    }
    return 0;
}
