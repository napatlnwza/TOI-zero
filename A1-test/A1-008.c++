#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    cin >> line;
    if (line.length() == 13) cout << "yes";
    else cout << "no";
    return 0;
}