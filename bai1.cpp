#include <iostream>
using namespace std;
int main(){
    int a[5];
    cout << "Hay nhap diem cua 5 hoc sinh: ";
    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }
    for(int i = 0; i < 5 - 1; i++){
        int min = i;
        for(int j = i + 1; j < 5; j++){
            if(a[j] > a[min]){
                min = j;
            }
            
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    cout << "Diem cua 5 hoc sinh sau khi sap xep tu lon den be la: ";
    for(int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }
    return 0;
}
