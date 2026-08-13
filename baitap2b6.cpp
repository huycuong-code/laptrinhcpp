#include <iostream>
#include <string>
using namespace std;
int main(){
    cout << "Hay nhap diem thi cua ban: ";
    float diem;
    cin >> diem;
    string khuvuc;
    if(diem >= 20){
        cout << "Khu vuc ban song la (vui long viet hoa): ";
        cin >> khuvuc;
        if(khuvuc == "KV1"){
            diem += 0.75;
        }
        if(khuvuc == "KV2"){
            diem += 0.25;
        }
        cout << "Diem sau khi cong cua ban la: " << diem;
    }
    else{
        cout << "Ban khong du dieu kien xet tuyen!";
    }
}
