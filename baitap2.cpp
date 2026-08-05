#include <iostream>
#include <string>
using namespace std;
int main(){
    string HoVaTen;
    string Lop;
    cout << "Nhap ho va ten: ";
    getline(cin, HoVaTen);
    cout << "Nhap lop hoc: ";
    getline(cin, Lop);
    cout << "Xin chao, " << HoVaTen << ", lop " << Lop << "!" << "\n";
}