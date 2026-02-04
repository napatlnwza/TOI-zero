#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    char al;
    cin >> al;
    double price=0;
    int n;
    cin >> n;
    for (int i=1;i<=n;i++) {
        double a;
        cin >> a;
        price+=a;
    }
    double discount;
    if (al == 'Y') {
        discount=price * 0.05;
        price-=discount;
        price = floor(price * 100 +0.5) / 100;
        cout << fixed << setprecision(2) << price;
        return 0;
    }
    else if (al == 'N' && price >= 500) {
        discount=price * 0.03;
        price-=discount;
        price = floor(price * 100 +0.5) / 100;
        cout << fixed << setprecision(2) << price;
        return 0;
    }
    cout << fixed << setprecision(2) << price;
    return 0;
}