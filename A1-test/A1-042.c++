#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
using namespace std;

int main() {
    string l;
    getline(cin,l);
    for (char &i:l) {
        i=toupper(i);
    }
    int x=0,y=0;
    for (char i:l) {
        if (i == 'N') y++;
        else if (i == 'S') y--;
        else if (i == 'E') x++;
        else if (i == 'W') x--;
    }
    cout << x << " " << y << " " << abs(x) + abs(y) << endl;
    return 0;
}