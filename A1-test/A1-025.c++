#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string line;
    getline(cin,line);
    string first="",last="";
    first+=toupper(line[0]);
    last+=toupper(line[1]);
    if (first[0]=='A') cout << "ace of ";
    else if (first[0] == 'J') cout << "jack of ";
    else if (first[0] == 'Q') cout << "queen of ";
    else if (first[0] == 'K') cout << "king of ";
    else if (line.length()-1==2) {cout << first[0] << line[1] << " of "; last[0]=toupper(line[2]);}
    else cout << first[0] << " of ";
    
    if (last[0] == 'D') cout << "diamonds";
    else if (last[0] == 'H') cout << "hearts";
    else if (last[0] == 'S') cout << "spades";
    else if (last[0] == 'C') cout << "clubs";
    return 0;
}