#include <iostream>
#include <string> 
using namespace std;

int main() {
    string vowel="aeiou";
    string line;
    cin >> line;
    if (vowel.find(line) != string::npos) cout << "yes";
    else cout << "no";
}