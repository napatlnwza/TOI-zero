#include <iostream>
#include <string>
using namespace std;

int main() {
    string l;
    int a=0,e=0,i=0,o=0,u=0;
    getline(cin,l);
    for (char alpha : l) {   
        if (alpha=='A' || alpha=='a') a++;
        else if (alpha=='E' || alpha=='e') e++;
        else if (alpha=='I' || alpha=='i') i++;
        else if (alpha=='O' || alpha=='o') o++;
        else if (alpha=='U' || alpha=='u') u++;
    }
    if (a>0) cout << "a: " << a << endl;
    if (e>0) cout << "e: " << e << endl;
    if (i>0) cout << "i: " << i << endl;
    if (o>0) cout << "o: " << o << endl;
    if (u>0) cout << "u: " << u << endl;
    return 0;
}