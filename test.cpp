#include <iostream>  
#include <cmath>  
using namespace std;

int main() {
    int s;
    cout << "Nhap vao dien tich: " << endl;
    cin >> s;

    // Tim phuong an thay the  
    int khongGian[100][2]; // Gia su khong co qua 100 cach thay the  
    int count = 0;

    for (int rong = 1; rong <= sqrt(s); rong++) {
        if (s % rong == 0) {
            int dai = s / rong;
            // Chỉ thêm cặp (dai, rong) nếu chúng không bằng nhau  
            if (dai != rong) {
                khongGian[count][0] = dai;
                khongGian[count][1] = rong;
                count++;
                cout << "Cac phuong an thay the la: " << dai << "\t" << rong << endl;
            }
        }
    }

    // In cac phuong an với số thứ tự  
    for (int i = 0; i < count; i++) {
        cout << "s" << (i + 1) << " = " << khongGian[i][0] << " x " << khongGian[i][1] << endl;
    }

    return 0;
}