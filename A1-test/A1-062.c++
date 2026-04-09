#include <iostream>
using namespace std;

int main() {
    int s, e;
    cin >> s >> e; // รับค่าตัวเริ่มต้น (s) และตัวสุดท้าย (e)
    int count = 0; // ตัวแปรเก็บจำนวนของจำนวนเฉพาะ
    for (int num = s; num <= e; num++) {
        if (num < 2) {
            continue; 
        }
        bool is_prime = true;
        for (int j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                is_prime = false; // ถ้ามีตัวหารลงตัว แสดงว่าไม่ใช่จำนวนเฉพาะ
                break;
            }
        }
        if (is_prime) {
            cout << num << " ";
            count++;
        }
    }
    cout << "\nTotal primes: " << count << "\n";
    return 0;
}