// BTVN 2 — Kiểm tra số đối xứng (palindrome) (bắt buộc):
// Đề bài: Viết chương trình (file baitap2.cpp) nhập số nguyên dương n.
// Dùng vòng lặp while đảo ngược n rồi so sánh với n ban đầu để kết luận n có phải số đối xứng không.
// Ví dụ 12321 là số đối xứng, 12345 thì không. Gợi ý: lưu lại giá trị gốc của n trước khi đảo.
#include <iostream>
using namespace std;
int main()
{
    int n, doi_xung = 0, temp;
    cout << "Hay nhap mot so nguyen duong n: ";
    while (true)
    {
        cin >> n;
        temp = n;
        if (n > 0)
        {
            while (n != 0)
            {
                doi_xung = doi_xung * 10 + (n % 10);
                n = n / 10;
            }
            if (doi_xung == temp)
            {
                cout << temp << " la mot so doi xung!\n";
            }
            else
            {
                cout << temp << " khong phai la mot so doi xung!\n";
            }
            break;
        }
        else
        {
            cout << n << " khong phai la so nguyen duong!. Moi nhap lai!\n";
        }
    }
}