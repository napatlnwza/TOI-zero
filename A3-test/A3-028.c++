#include <iostream>
using namespace std;

int main() {
    int n,m;
    int bom;
    cin >> n >> m;
    cin >> bom;
    char area[n][m];
    int r,c;
    for (int j=0; j<n; j++) {
        for (int k=0; k<m; k++) {
            area[j][k] = '0';
        }
    }
    for (int i=1; i<=bom; i++) {
        cin >> r >> c;
        area[r][c] = 'x'; 
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (area[i][j] != 'x') {
                int count=0;
                for (int r = i - 1; r <= i + 1; r++) {
                    for (int c = j - 1; c <= j + 1; c++) {
                        if (r >= 0 && r < n && c >= 0 && c < m) {
                            if (area[r][c] == 'x') {
                                count++;
                            }
            
                        }
                    }
                }
                area[i][j]=count+(int)'0';
            }
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cout << area[i][j] << " ";
        }
        cout << endl;
    }
}