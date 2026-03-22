#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    double FT = n * 0.5;
    double cost = 0;
    if (n > 200) {
        cost += (n - 200) * 15;
        n = 200;
    }
    if (n > 100) {
        cost += (n - 100) * 12;
        n = 100;
    }
    if (n > 50) {
        cost += (n - 50) * 10;
        n = 50;
    }
    if (n > 10) {
        cost += (n - 10) * 7;
        n = 10;
    }
    cost += n * 5;
    double VAT = cost * 0.07;
    cout << fixed << setprecision(2) << cost+FT+VAT;
    return 0;
}