#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,count=0;
    cin >> n;
    vector<int> red(n+1),blue(n+1);
    for (int i=1;i<=n;i++) {
        cin >> red[i];
    }
    for (int i=1;i<=n;i++) {
        cin >> blue[i];        
    }
    red[0]=1;
    blue[0]=1;
    for (int i = 0; i < n; i++) {
        int a = red[i];       // จุดต้นคันแดง
        int b = red[i+1];     // จุดปลายคันแดง
        int c = blue[i];      // จุดต้นคันน้ำเงิน
        int d = blue[i+1];    // จุดปลายคันน้ำเงิน
        // กรณีที่ 1: วิ่งเส้นเดียวกันเป๊ะๆ (ทับรอย) หรือ สวนทางกันบนเส้นเดียวกัน
        if ((a == c && b == d) || (a == d && b == c)) {
            count++;
        } 
        // กรณีที่ 2: จุดไม่ซ้ำกันเลย ให้เช็คการลากเส้นตัดไขว้กัน
        else if (a != c && a != d && b != c && b != d) {
            // หา min max ของคันแดงเพื่อแบ่งโซน
            int min1 = min(a, b);
            int max1 = max(a, b);
            // เช็คว่าจุดของคันน้ำเงิน ตกอยู่ในโซนข้างในหรือไม่
            bool c_inside = (c > min1 && c < max1);
            bool d_inside = (d > min1 && d < max1);
            // ถ้าจุดนึงอยู่ข้างใน อีกจุดอยู่ข้างนอก (ค่าความจริงไม่เหมือนกัน) แปลว่าเส้นไขว้กัน
            if (c_inside != d_inside) {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}