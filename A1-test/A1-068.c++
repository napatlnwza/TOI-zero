#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> score(n);
    double avr=0;
    bool check=true;
    for (int i=0;i<n;i++) {
        cin >> score[i];
        avr+=score[i];
        if (score[i] < 50) {
            check=false;
        }
    }
    avr=avr/n;
    cout << fixed << setprecision(1) << avr << endl;

    if (avr >= 60 && check) cout << "PASS";
    else cout << "FAIL";
    return 0;
}