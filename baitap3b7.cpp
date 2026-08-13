#include <iostream>
using namespace std;
int main(){
    char diem_chu;
    cout << "Hay nhap diem chu (tu A den F) cua ban: ";
    cin >> diem_chu;
    switch(diem_chu){
        case 'A':
        cout << "Diem cua ban la: 4.0";
        break;
        case 'B':
        cout << "Diem cua ban la: 3.0";
        break;
        case 'C':
        cout << "Diem cua ban la: 2.0";
        break;
        case 'D':
        cout << "Diem cua ban la: 1.0";
        break;
        case 'F':
        cout << "Diem cua ban la: 0.0";
        break;
        default:
        cout << "Diem chu khong hop le!";
        break;
    }
}