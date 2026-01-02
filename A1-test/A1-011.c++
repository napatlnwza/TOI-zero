#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    getline(cin , line);
    int count=1;
    for (int i=1;i<line.length();i++) {
        if (line[i] == line[i-1]) {
            count++;
        }
        else {
            cout << count << line[i-1];
            count=1;
        }
    }
    cout << count << line[line.length() -1];
    return 0;
}