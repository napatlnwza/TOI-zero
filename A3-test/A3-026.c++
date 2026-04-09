#include <iostream>
using namespace std;

int main() {
    int m,n;
    cin >> m >> n;
    char p1[m][n],p2[m][n],result[m][n];
    for (int i=0;i<m;i++) { // รับ p1
        for (int j=0;j<n;j++) {
            cin >> p1[i][j];
        }
    }
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cin >> p2[i][j];
        }
    }
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            if (p1[i][j] == '-' && p2[i][j] == '-') {
                result[i][j]='-';
            }
            else if (p2[i][j] == '-' && p1[i][j] == '+') {
                result[i][j]='+';
            }
            else if (p1[i][j] == '-' && p2[i][j] == 'x') {
                result[i][j]='x';
            }
            else if (p1[i][j]=='+' && p2[i][j]=='x') {
                result[i][j]='*';
            }
        }
    }
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cout << result[i][j];
        }
        cout << endl;
    }
    return 0;
}