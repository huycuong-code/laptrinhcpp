//bai4
#include <iostream>
using namespace std;
int main()
{
    int n, k, du, count = 0;

    while (true)
    {
        cin >> n >> k;
        if ((n > 0) && (0 <= k) && (k <= 9))
        {
            while (n != 0)
            {
                du = n % 10;
                if (du == k)
                {
                    count++;
                }
                n = n / 10;
            }
            cout << "Chu so " << k << " xuat hien " << count << " lan";
            break;
        }
        else
        {
            cout << "So khong hop le. Moi nhap lai!\n";
        }
    }
}