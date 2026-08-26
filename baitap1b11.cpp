#include <iostream>
#include <vector>
using namespace std;
//cua em phai dung vector moi nhap duoc n bat ki cho mang
int main()
{
    int n, x, count = 0, appear;
    cout << "Vui long nhap n va x mong muon: ";
    cin >> n >> x;
    vector<int> a(n);
    cout << "Vui long nhap cac phan tu cho mang a co " << n << " phan tu: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == x)
        {
            count++;
            appear = i;
        }
    }
    if (count == 0)
    {
        cout << "So " << x << " khong xuat hien trong mang!";
    }
    else
    {
        cout << "So " << x << " xuat hien " << count << " lan trong mang.\n"
             << "Vi tri so " << x << " xuat hien dau tien trong mang (xet theo chi so cua mang) la: " << appear << ".";
    }
}
