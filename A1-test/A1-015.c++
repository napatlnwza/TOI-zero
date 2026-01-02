#include <iostream>
#include <string>
using namespace std;

int main() {
    string name,sur;
    int age;
    cin >> name;
    cin >> sur;
    cin >> age;
    string ans="";
    if (name.length() > 5 && sur.length() > 5) {
        ans += name[0];
        ans += name[1];
        ans += sur[sur.length() - 1];
        ans += to_string(age%10);
        cout << ans;
        return 0;
    }
    else {
        ans+=name[0];
        ans+=to_string(age);
        ans+=sur[sur.length()-1];
        cout << ans;
        return 0;
    }
    return 0;
}