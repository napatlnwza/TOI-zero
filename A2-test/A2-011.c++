#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> num;
    for (int i=1;i<=10;i++) {
        int target;
        cin >> target;
        if (num.empty()) num.push_back(target);
        if (!num.empty() && find(num.begin(),num.end(),target) != num.end()) {
            continue;
        }
        if (find(num.begin(),num.end(),target) == num.end()) num.push_back(target);
    }
    for (auto i:num) cout << i << " ";
    return 0;
}