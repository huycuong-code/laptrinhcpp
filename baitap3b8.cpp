#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Nhap mot so nguyen duong n: ";
    cin >> n;
    if(n >= 2){
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                cout << "Uoc so nho nhat lon hon 1 la: " << i;
                break;
            }
            else{
                cout << "n la so nguyen to!";
            }
        }
    }
    else{
        cout << "n khong hop le!";
    }
}
