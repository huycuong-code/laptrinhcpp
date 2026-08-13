#include <iostream>
using namespace std;
int main(){
    cout << "Hay nhap tuoi cua ban: ";
    int tuoi;
    cin >> tuoi;
    cout << "Hay nhap thu nhap cua ban: ";
    double thunhap;
    cin >> thunhap;
    if((tuoi >= 18) && (thunhap >= 5000000)){
        cout << "1";
    }
    else{
        cout << "0";
    }
}
