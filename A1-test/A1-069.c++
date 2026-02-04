#include <iostream>
using namespace std;

int main() {
    int row, column;
    cin >> row;
    cin >> column;
    int top = (row + 1) / 2;
    int kid = row / 2;
    for (int i = 0; i < top;i++) {
        for (int j = 0; j < column;j++) {
            cout << "A ";
        }
        cout << endl;
    }

    for (int i = 0; i < kid;i++) {
        for (int j = 0; j < column;j++) {
            cout << "K ";
        }
        cout << endl;
    }

    return 0;
}
