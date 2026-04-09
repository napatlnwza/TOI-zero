#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix1[n][n];
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cin >> matrix1[i][j];    
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            int a;
            cin >> a;
            cout << matrix1[i][j] + a << " ";
        }
        cout << endl;
    }
    return 0;
}