#include <iostream>
#include <string>
using namespace std;

int main() {
    string vowel="AEIOU";
    int n;
    cin >> n;
    int count=0;
    for (int i=1;i<=n;i++) {
        char a;
        cin >> a;
        if (vowel.find(a) != string::npos) {
            count+=1;
        }
    }
    cout << count;
    return 0;
}