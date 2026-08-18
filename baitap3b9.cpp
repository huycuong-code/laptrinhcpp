// BTVN 3 — Tìm ước chung lớn nhất bằng thuật toán Euclid (bắt buộc):
// Đề bài: Viết chương trình (file baitap3.cpp) nhập 2 số nguyên dương a và b.
// Dùng vòng lặp while lặp lại phép lấy phần dư a % b cho đến khi b = 0 để tìm và in ra ước chung lớn nhất của 2 số.
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Hay nhap hai so nguyen duong bat ki: ";
    while (true)
    {
        cin >> a >> b;
        if (a <= 0 || b <= 0)
        {
            cout << "So vua nhap khong hop le! Moi nhap lai!\n";
        }
        else
        {
            int c;
            while (b != 0)
            {
                c = b;
                b = a % b;
                a = c;
            }
            cout << "Uoc chung lon nhat cua hai so a va b la: " << a;
            break;
        }
    }
}