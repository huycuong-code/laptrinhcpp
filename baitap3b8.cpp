#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout << "Nhap mot so nguyen duong n: ";
    cin >> n;
    if(n >= 2){
        int dem = 0;
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                dem++;
                cout << "Uoc so nho nhat lon hon 1 la: " << i;
                break;
            }
        }
        if(dem != 1){
            cout << "n la so nguyen to!";
        }
    }
    else{
        cout << "n khong hop le!";
    }
}
