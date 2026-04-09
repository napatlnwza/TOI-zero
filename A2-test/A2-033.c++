#include <iostream>
using namespace std;

int main() {
    int h1, m1, h2, m2;
    char dot;
    cin >> h1 >> dot >> m1;
    cin >> h2 >> dot >> m2;
    if (m1 < 0 || m1 > 59 || m2 < 0 || m2 > 59 || h1 < 0 || h2 < 0 || h1 > 23 || h2 > 23) {
        cout << "ERROR";
        return 0;
    }
    int total_in = (h1 * 60) + m1;
    int total_out = (h2 * 60) + m2;
    if (total_in >= total_out) {
        cout << "ERROR";
        return 0;
    }
    int diff = total_out - total_in;
    if (diff < 15) {
        cout << "FREE";
        return 0;
    }
    int hours = diff / 60;
    int minutes = diff % 60;

    if (minutes > 0) {
       hours++;
    }
    if (hours == 1) {
        cout << "25";
    } 
    else if (hours == 2) {
        cout << "50";
    }
    else if (hours == 3) {
        cout << "80";
    }
    else if (hours == 4) {
        cout << "110";
    }
    else if (hours == 5) {
        cout << "145";
    }
    else if (hours == 6) {
        cout << "180";
    }
    else if (hours >= 7) {
        cout << "250";
    }
    return 0;
}