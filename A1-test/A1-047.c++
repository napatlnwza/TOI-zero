#include <iostream>
using namespace std;

int main() {
    int n,a;
    cin >> n;
    cin >> a;
    if (n == 0 || a == 0) {
        cout << "No teaching";
        return 0;
    }
    int h=n*a/60,m=n*a%60;
    if (h > 0 && m > 0) {
        cout << h << " hours " << m << " minutes" << endl;
    }
    else if (h > 0) {
        cout << h << " hours";
    }
    else if (m > 0) {
        cout << m << " minutes";
    }

    return 0;
}