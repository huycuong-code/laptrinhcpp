//bai7
#include <iostream>
using namespace std;
int main(){
    int n, count = 0;
    cout << "Hay nhap mot so n: ";
    cin >> n;
    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
        }
        else{
            n = 3 * n + 1;
        }
        count++
    }
    cout << "So buoc da thuc hien la: " << count;
}
