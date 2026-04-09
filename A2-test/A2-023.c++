// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string s;
//     getline(cin,s);
//     for (char &c : s) c = tolower(c);
    
//     bool hasRorB = false;
//     int maxA = 0;
//     int A = 0;

//     for (int i = 0; i < s.length(); i++) {
//         if (s[i] == 'r') {
//             hasRorB = true;
//             A = 0;
//             if (i + 1 >= s.length() || s[i + 1] != 'a') {
//                 cout << "no " << i + 1 << endl;
//                 return 0;
//             }
//         }
//         else if (s[i] == 'b') {
//             hasRorB = true;
//             A = 0; 
//             if (i + 1 >= s.length() || (s[i + 1] != 'i' && s[i + 1] != 't')) {
//                 cout << "no " << i + 1 << endl;
//                 return 0;
//             }
//         }
//         else if (s[i] == 'a') {
//             if (i == 0 || (s[i - 1] != 'r' && s[i - 1] != 'a')) {
//                 cout << "no " << i << endl;
//                 return 0;
//             }
//             A++;
//             if (A > maxA) maxA = A;
//         }
//         else if (s[i] == 'i' || s[i] == 't') {
//             A = 0;
//         }
//     }
//     if (!hasRorB) {
//         cout << "unknown " << s.length() << endl;
//     } else {
//         cout << "yes " << maxA << endl;
//     }
//     return 0;
// }
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    if (!(cin >> s)) return 0;

    int n = s.length();
    string low = s;
    for (char &c : low) c = tolower(c);

    bool hasR = false;
    bool hasB = false;
    int maxA = 0;
    int currentA = 0;

    for (int i = 0; i < n; i++) {
        char c = low[i];

        // 1. เช็กเงื่อนไข NO: หลัง r ต้องมี a เสมอ [cite: 7, 11]
        if (c == 'r') {
            hasR = true;
            currentA = 0; // Reset การนับ A
            if (i + 1 >= n || low[i + 1] != 'a') {
                cout << "no " << i + 1 << endl;
                return 0;
            }
        }
        // 2. เช็กเงื่อนไข NO: หลัง b ต้องมี i หรือ t เสมอ [cite: 8, 11]
        else if (c == 'b') {
            hasB = true;
            currentA = 0; // Reset การนับ A
            if (i + 1 >= n || (low[i + 1] != 'i' && low[i + 1] != 't')) {
                cout << "no " << i + 1 << endl;
                return 0;
            }
        }
        // 3. เช็กเงื่อนไข NO: a ต้องตามหลัง r หรือ a เท่านั้น [cite: 7, 11]
        else if (c == 'a') {
            if (i == 0 || (low[i - 1] != 'r' && low[i - 1] != 'a')) {
                cout << "no " << i << endl;
                return 0;
            }
            currentA++;
            if (currentA > maxA) maxA = currentA;
        }
        // 4. กรณีตัวอักษรอื่นๆ (i, t หรือตัวนอกเหนือจากนี้ เช่น 'l' ใน Tilt) 
        else {
            currentA = 0;
        }
    }

    // ตัดสินผลลัพธ์สุดท้าย [cite: 12, 14]
    if (!hasR && !hasB) {
        cout << "unknown " << n << endl;
    } else {
        cout << "yes " << maxA << endl;
    }

    return 0;
}