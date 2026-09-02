#include <iostream>
#include <iomanip>
using namespace std;
double tinhdientichHCN(double dai, double rong)
{
    return dai * rong;
}
double tinhchuviHCN(double dai, double rong)
{
    return (dai + rong) * 2;
}
double tinhdientichtronvoibankinh(double r, double PI)
{
    return PI * r * r;
}
double tinhchuvitron(double r, double PI)
{
    return 2 * PI * r;
}
int main()
{
    double dai, rong, bankinh;
    const double PI = 3.14159;
    cout << "Day la bai toan tinh chu vi va dien tich cua HCN va hinh tron hay nhap theo thu tu chieu dai, chieu rong, ban kinh: ";
    cin >> dai >> rong >> bankinh;
    cout << "Dien tich va chu vi cua HCN la: " << fixed << setprecision(2) << tinhdientichHCN(dai, rong) << " " << tinhchuviHCN(dai, rong) << "\n";
    cout << "Dien tich va chu vi cua hinh tron la: " << fixed << setprecision(2) << tinhdientichtronvoibankinh(bankinh, PI) << " " << tinhchuvitron(bankinh, PI);
}
