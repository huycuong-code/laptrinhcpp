// BTVN 4 — Trò chơi đoán số có giới hạn lượt (nâng cao, khuyến khích):
// Đề bài: Viết chương trình (file baitap4.cpp) mở rộng trò chơi đoán số: người chơi chỉ có tối đa 7 lượt đoán.
// Dùng do...while kết hợp điều kiện kép — dừng khi đoán đúng HOẶC hết lượt.
// Kết thúc in ra người chơi thắng hay thua và số bí mật là bao nhiêu.
#include <iostream>
using namespace std;
int main()
{
    int secret_number = 20, n, count = 0;
    cout << "Day la tro choi doan so. Hay chon mot so: ";
    do
    {
        cin >> n;
        count++;
        if (n < secret_number)
        {
            cout << "So can doan lon!\n";
        }
        else if (n > secret_number)
        {
            cout << "So can doan nho hon!\n";
        }
        
    } while((n != secret_number) && (count < 7));
    if (count == 7)
    {
        cout << "Ban da het luot doan cua minh va ban da thua!\n";
    }
    else
        {
            cout << "Ban da chien thang tro choi nay!\n"
                 << "So bi mat do la: " << secret_number;
        }
}