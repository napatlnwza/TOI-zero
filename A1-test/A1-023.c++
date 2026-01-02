#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    char a;
    cin >> a;
    a=toupper(a);
    string ans;
    if (a=='C') {
        if (n<=0) ans="solid";
        else if (n>= 100) ans="gas";
        else ans="liquid";
        cout << ans;
        return 0;
    }
    else if (a=='F') {
        if (n <=32) ans="solid";
        else if (n>=212) ans="gas";
        else ans="liquid";
        cout << ans;
        return 0;
    }
    return 0;
}