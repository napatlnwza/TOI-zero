#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string line;
    getline(cin,line);
    string l="";
    int j=0;
    for (int i=line.length()-1;i>=0;i--) {
        if(isdigit(line[j]) && isdigit(line[j+1])) {
            l+=line[j];
            if (i%3==0) {
                l+=",";
            }
            j++;
            continue;
        }
        else if (!isdigit(line[j+1])) l+=line[j];
        j++;
    }
    cout << l;
    return 0;
}