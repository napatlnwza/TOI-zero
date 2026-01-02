#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    int max=-99;
    if (a > max) max=a;
    if (b>max) max=b;
    if (c>max) max=c;
    cout << max;
    return 0;
}