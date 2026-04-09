#include <iostream>
#include <string>
using namespace std;

int main() {
    string base2="";
    int n;
    cin >> n;
    if (n == 0) {
        cout << 0 << endl << 0 << endl << 0 << endl;
        return 0;
    }
    int m=n;
    while (n>0) {
        int k=n%2;
        base2+=to_string(k);
        n=n/2;
    }
    for (int i=base2.length()-1;i>=0;i--) {
        cout << base2[i];
    }
    cout <<endl <<  oct << m << endl;
    cout << hex << uppercase << m;
    return 0;
}