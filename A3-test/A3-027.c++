#include <iostream>
using namespace std;

int main() {
    int m,n;
    cin >> m >> n;
    char area[m][n];
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cin >> area[i][j];
        }
    }
    char nextarea[m][n];
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            if (i>0 && area[i-1][j] == '*') {
                nextarea[i][j]='*';
            }
            else if (area[i][j] == '*') {
                nextarea[i][j]='*';
            }
            else {
                nextarea[i][j]='-';
            }
        }
    }
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cout << nextarea[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}