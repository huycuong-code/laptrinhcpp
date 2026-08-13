#include <iostream>
using namespace std;
int main(){
    float diem;
    cout << "Hay nhap diem cua ban: ";
    cin >> diem;
    if(0 <= diem && diem <= 10){
        if(8 <= diem){
            cout << "Gioi";
        }
        else if(6.5 <= diem){
            cout << "Kha";
        }
        else if(5 <= diem){
            cout << "Trung binh";
        }
        else{
            cout << "Yeu";
        }
    }
    else{
        cout << "Diem khong hop le!";
    }
}
