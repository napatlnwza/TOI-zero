#include <iostream>
using namespace std;

int main() {
    int date,mount;
    cin >> mount;
    cin >> date;
    string season;
    if (mount == 1 || mount == 2) {
        season="winter";
    }
    else if (mount == 3) {
        if (date >= 21) {
            season="spring";
        }
        else if (date < 21) {
            season="winter";
        }
    }
    else if (mount == 4 || mount == 5) {
        season="spring";
    }
    else if (mount == 6) {
        if (date>=21) {
            season="summer";
        }
        else if (date < 21) {
            season="spring";
        }
    }
    else if (mount == 7 || mount == 8) season="summer";
    else if (mount == 9) {
        if (date >= 21) season="fall";
        else if (date < 21) season="summer";
    }
    else if (mount == 10 || mount == 11) season="fall";
    else if (mount == 12) {
        if (date>=21) season="winter";
        else if (date < 21) season="fall";
    }
    cout << season;
    return 0;
}