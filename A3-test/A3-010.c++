#include <iostream>
using namespace std;

int main() {
    int n,k,theif;
    cin >> n >> k >> theif;
    int count=1;
    int sum=1;
    while (true) {
        sum=sum+k;
        while (sum>n) {sum=sum-n;}
        if (sum==1) {
            break;
        }
        count++;
        if (sum == theif) {
            break;
        }
    }
    cout << count;
    return 0;
}