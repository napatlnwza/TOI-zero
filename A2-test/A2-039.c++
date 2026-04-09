#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> len(3);
    for (int i=0;i<3;i++) {
        cin >> len[i];
        cout << "Input number " << i+1 << " stored." << endl;
    }
    int c;
    cin >> c;
    if (c == 1) {
        cout << "Original order: " << len[0] << " " << len[1] << " " << len[2];
    }
    else if (c == 2) {
        sort(len.begin(),len.end(),greater<int>());
        cout << "Descending order: " << len[0] << " " << len[1] << " " << len[2];
    }
    else if (c == 3) {
        sort(len.begin(),len.end());
        cout << "Ascending order: " << len[0] << " " << len[1] << " " << len[2];
    }
    return 0;
}