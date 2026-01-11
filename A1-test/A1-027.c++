#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string reverseRec(string s) {
    if (s == "") {
        return "";
    }
    return reverseRec(s.substr(1)) + s.substr(0, 1);
}

int main() {
    string text;
    getline(cin,text);
    
    for (char &i:text) i=tolower(i);
    cout << reverseRec(text);
    return 0;
}
