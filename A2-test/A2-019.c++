#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string input, line;
    cin >> input;
    
    // 1. แปลงเป็นตัวพิมพ์ใหญ่เพื่อใช้เช็คเงื่อนไข
    line = input;
    for (char &i:line) {
        i = toupper(i);
    }

    int maxU = 0;
    bool foundBUU = false;
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == 'B') {
            int countU = 0;
            int j = i + 1;
            while (j < line.length() && line[j] == 'U') {
                countU++;
                j++;
            }
            if (countU >= 2) { // ต้องมี U อย่างน้อย 2
                foundBUU = true;
                if (countU > maxU) maxU = countU;
            }
        }
    }

    if (foundBUU) {
        cout << "Yes " << maxU << endl;
    } 
    else {
        size_t firstB = line.find('B');
        if (firstB != string::npos) {
            string result = input;
            for (int i = firstB + 1; i < result.length(); i++) {
                result[i] = 'U';
            }
            cout << result << endl;
        } 
        else {
            string pattern = "BUU";
            for (int i = 0; i < input.length(); i++) {
                cout << pattern[i % 3];
            }
            cout << endl;
        }
    }

    return 0;
}