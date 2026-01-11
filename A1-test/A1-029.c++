#include <iostream>
#include <string>
using namespace std;

int main() {
    string vowel="aeiou";
    int count=0;
    string line;
    getline(cin,line);
    for (int i=0;i<line.length();i++) {
        if (vowel.find(line[i]) != string::npos) {
            count++;
        }
    }
    cout << count;
    return 0;
}