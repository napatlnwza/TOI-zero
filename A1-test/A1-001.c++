#include <iostream>
#include <string>
using namespace std;

int main() {
    string name,sur;
    cin >> name;
    cin >> sur;
    cout << "Hello " << name << " " << sur << endl;
    cout << name[0] << name[1] << sur[0] << sur[1];
    return 0;
}