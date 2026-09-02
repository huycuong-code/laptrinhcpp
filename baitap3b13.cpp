#include <iostream>
using namespace std;
double tinhtienhang(int soluong, int dongia, float phantramgiam)
{
    return soluong * (dongia * (1 - phantramgiam));
}
int main()
{
    int soluong, dongia;
    float phantramgiam;
    cout << "Hay nhap so luong, don gia, phan tram giam: ";
    cin >> soluong >> dongia >> phantramgiam;
    cout << "Ban da mua hang voi so luong la " << soluong << " va gia tien cua mot san pham la " << dongia
         << " va dang co chuong trinh sale " << phantramgiam * 100 << "%" << "\n"
         << "Vay so tien ban phai tra la: " << tinhtienhang(soluong, dongia, phantramgiam);
}
