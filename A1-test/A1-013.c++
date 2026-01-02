#include <iostream>
using namespace std;

int main() {
    int pass;
    char alpha;
    cin >> alpha;
    cin >> pass;
    if (alpha == 'H' && pass==4567) {
        cout << "safe unlocked";
        return 0;
    }
    else if (alpha == 'H' && pass != 4567) {
        cout << "safe locked - change digit";
        return 0;
    }
    else if (alpha != 'H' && pass == 4567) {
        cout << "safe locked - change char";
        return 0;
    }
    else if (alpha !='H' && pass != 4567) {
        cout << "safe locked";
        return 0;
    }
    return 0;
}