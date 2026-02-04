#include <iostream>
#include <string>
#include <vector> 
using namespace std;

int main() {
    int age;
    string day;
    cin >> age >> day;
    bool weday=false;
    if (day == "Wed") weday=true;
    if (age < 5) {
        cout << 0;
    }
    else if (age >= 5 && age <= 18) {
        if (weday) {
            cout << 50;
        }
        else {
            cout << 100;
        }
    }
    else if (age >= 19) {
        if (weday) {
            cout << 75; 
            return 0;
        }
        cout << 150;
    }
    return 0;
}