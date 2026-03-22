#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cost;
    if (n <= 1) cost = 35;
    else if (n <= 10) cost = 35 + (n - 1) * 5;
    else cost = 35 + 9 * 5 + (n - 10) * 8;
    cout << cost << endl;
    return 0;
}