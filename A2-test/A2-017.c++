#include <iostream>
using namespace std;

int main() {
    char size, paped, toping;
    int price = 0;
    int toppingPrice = 0;
    cin >> size >> paped >> toping;

    // 1. คำนวณราคาพื้นฐาน (Base Price)
    if (size == 'S' && paped == 'R') {
        price = 60;
    } 
    else if ((size == 'S' && paped == 'T') || (size == 'M' && paped == 'R')) {
        price = 80;
    } 
    else if ((size == 'L' && paped == 'R') || (size == 'M' && paped == 'T')) {
        price = 100;
    }
    else if (size == 'L' && paped == 'T') {
        price = 120;
    }
    // 2. คำนวณราคาท็อปปิ้ง (Topping Price)
    if (toping == 'P' || toping == 'E') {
        int numtoping;
        cin >> numtoping;
        
        if (toping == 'P') {
            toppingPrice = numtoping * 15;
        } else { // กรณี toping == 'E'
            toppingPrice = numtoping * 10;
        }
    }
    // 3. รวมราคาและแสดงผล (ถ้าพบราคาพื้นฐานที่ถูกต้อง)
    if (price > 0) {
        cout << price + toppingPrice << "\n";
    }

    return 0;
}