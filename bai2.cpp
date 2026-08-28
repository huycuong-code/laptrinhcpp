#include <iostream>
using namespace std;
int main(){
    int a[5];
    cout << "Hay nhap gia cua 5 san pham: ";
    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }
    for(int i = 0; i < 5 - 1; i++){
        for(int j = 0; j < 5 - 1 - i; j++){
            if(a[j] > a[j + 1]){
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "Gia cua 5 san pham sau khi sap xep tu be den lon la: ";
    for(int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }
    return 0;
}
