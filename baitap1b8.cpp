#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Nhap mot so nguyen n: ";
    cin >> n;
    int giaithua = 1;
    if(0 <= n && n <= 12){
        for(int i = 1; i <= n; i++){
            giaithua *= i;
        }
        cout << "n! = " << giaithua;
    }
    else{
        cout << "n khong hop le!";
    }
}