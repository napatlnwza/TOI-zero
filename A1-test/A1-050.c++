#include <iostream>
using namespace std;

int main() {
    int n,male=0,female=0;
    while (cin >> n && n >= 0) {
        if (n % 2 == 0) 
            female++;
        else male++;
    }
    cout << male << " " << female << " " << male+female;
    return 0;
}