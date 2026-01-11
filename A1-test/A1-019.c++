#include <iostream>
using namespace std;

int main() {
    char line[3];
    cin >> line[0];
    cin >> line[1];
    cin >> line[2];
    if (line[0]==line[1] && line[0]==line[2]) cout << "all the same" << endl;
    else if (line[0] != line[1] && line[1] != line[2] && line[0] != line[2]) cout << "all different" << endl;
    else cout << "neither" << endl;
    return 0;
}