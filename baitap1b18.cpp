#include <iostream>
using namespace std;
class HinhChuNhat
{
private:
    double chieudai, chieurong;

public:
    HinhChuNhat(double dai, double rong)
    {
        if (dai > 0)
        {
            chieudai = dai;
        }
        else
        {
            chieudai = 1;
        }
        if (rong > 0)
        {
            chieurong = rong;
        }
        else
        {
            chieurong = 1;
        }
    }
    double getchieudai()
    {
        return chieudai;
    }
    double getchieurong()
    {
        return chieurong;
    }
    void setchieudai(double dai)
    {
        if (dai > 0)
        {
            chieudai = dai;
        }
    }
    void setchieurong(double rong)
    {
        if (rong > 0)
        {
            chieurong = rong;
        }
    }
    double tinhdientich()
    {
        return chieudai * chieurong;
    }
    double tinhchuvi()
    {
        return 2 * (chieudai + chieurong);
    }
};

int main()
{
    double dai1, dai2, dai3;
    double rong1, rong2, rong3;
    cout << "Moi nhap lan luot chieu dai cua 3 hcn: ";
    cin >> dai1 >> dai2 >> dai3;
    cout << "Moi nhap lan luot chieu rong cua 3 hcn: ";
    cin >> rong1 >> rong2 >> rong3;
    HinhChuNhat hcn1(dai1, rong1);
    HinhChuNhat hcn2(dai2, rong2);
    HinhChuNhat hcn3(dai3, rong3);
    cout << "Thong tin cua hinh chu nhat 1: " << endl;
    cout << "- Chieu dai: " << hcn1.getchieudai() << endl;
    cout << "- Chieu rong: " << hcn1.getchieurong() << endl;
    cout << "- Dien tich: " << hcn1.tinhdientich() << endl;
    cout << "- Chu vi: " << hcn1.tinhchuvi() << endl;
    cout << endl;
    cout << "Thong tin cua hinh chu nhat 2: " << endl;
    cout << "- Chieu dai: " << hcn2.getchieudai() << endl;
    cout << "- Chieu rong: " << hcn2.getchieurong() << endl;
    cout << "- Dien tich: " << hcn2.tinhdientich() << endl;
    cout << "- Chu vi: " << hcn2.tinhchuvi() << endl;
    cout << endl;
    cout << "Kiem tra setter: " << endl;
    cout << "Gia tri chieu dai truoc khi setter: " << hcn3.getchieudai() << endl;
    hcn3.setchieudai(-20);
    cout << "Gia tri chieu dai sau khi setter: " << hcn3.getchieudai() << endl;
}