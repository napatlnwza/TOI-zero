#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int d1 = s[0] - '0';
    int d2 = s[1] - '0';
    int d3 = s[2] - '0';
    int d4 = s[3] - '0';
    int d5 = s[4] - '0';
    int floor;
    if (d1 > 5) floor = 9;
    else if (d2 > 5) floor = 10;
    else if (d3 > 5) floor = 11;
    else if (d4 > 5) floor = 12;
    else if (d5 > 5) floor = 14;
    else floor = 13;
    bool isPal = (d1 == d5 && d2 == d4);
    int r1;
    if (isPal) {
        if (d1 + d5 > 5) r1 = 1;
        else if (d2 * d4 > 5) r1 = 2;
        else r1 = 0;
    } else {
        if (d5 != 0 && (d1 / d5) > 5) r1 = 1;
        else if ((d2 - d5) > 5) r1 = 2;
        else r1 = 0;
    }
    int sum = d1 + d2 + d3 + d4 + d5;
    int mul = d1 * d2 * d3 * d4 * d5;
    int r2;
    if (sum > 25) r2 = 1;
    else if (mul > 55) r2 = 2;
    else r2 = 0;
    cout << floor << r1 << r2;
    return 0;
}