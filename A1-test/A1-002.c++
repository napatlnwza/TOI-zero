#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int ten=0,five=0,two=0,one=0;
    ten=num/10;
    num=num%10;
    five=num/5;
    num=num%5;
    two=num/2;
    num=num%2;
    one=num;
    cout << "10 = " << ten << endl;
    cout << "5 = " << five << endl;
    cout << "2 = " << two << endl;
    cout << "1 = " << one;
    return 0;
}