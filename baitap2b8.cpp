#include <iostream>
using namespace std;
int main(){
    int sum = 0;
    int dem = 0;
    int n;
    cout << "Nhap mot so nguyen duong n: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0){
            dem += 1;
            sum += i;
        }
        else{
            continue;
        }
    }
    cout << "Co " << dem << " so chia het cho 3" << "\n";
    cout << "Tong cua cac so chia het cho 3 la: " << sum;
}
