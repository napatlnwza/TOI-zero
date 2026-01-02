#include <iostream>
using namespace std;

int main() {
    int test,mid,final;
    cin >> test;
    cin >> mid;
    cin >> final;
    if (test >= 5) {
        test = 1;
    }
    if (mid >= 20) {
        mid = 1;
    }
    if (final >= 25) {
        final=1;
    }
    if (test==true && mid == true && final==true) {
        cout << "pass";
    }
    else if (test!=1 || mid!=1 || final !=1){
        cout << "fail";
    }
    return 0;
}