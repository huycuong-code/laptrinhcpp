// BTVN 1 — Đếm số chữ số và tìm chữ số lớn nhất (bắt buộc):
// Đề bài: Viết chương trình (file baitap1.cpp) nhập số nguyên dương n.
// Dùng vòng lặp while đếm số chữ số của n và tìm chữ số lớn nhất trong n. 
// Ví dụ n = 5283 thì có 4 chữ số, chữ số lớn nhất là 8.
#include <iostream>
using namespace std;
int main(){
    long long n;
    int dem = 0, max = -1, du = -1;
    cout << "Hay nhap mot so nguyen duong: ";
    while(true){
        cin >> n;
        if(n > 0){
            while(n != 0){
                du = n % 10;
                if(max < du){
                    max = du;
                }
                n = n / 10;
                dem++;
            }
            cout << "So n co " << dem << " chu so" << " va chu so lon nhat la: " << max;
            break;
        }
        else{
            cout << "So khong hop le. Moi nhap lai!\n";
        }
    }
}