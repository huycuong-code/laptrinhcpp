// //bai1
// #include <iostream>
// using namespace std;
// int main(){
//     int n, sum = 0;
//     cout << "Moi nhap n: ";
//     cin >> n;
//     for(int i = 2; i <= n; i += 2){
//         sum += i;
//     }
//     cout << "Tong cac so chan tu 1 den n la: " << sum;
// }

//bai2
// #include <iostream>
// using namespace std;
// int main(){
//     int start, end, step;
//     cout << "Moi nhap nhiet do ban dau, nhiet do ket thuc, buoc nhay: ";
//     cin >> start >> end >> step;
//     for(int C = start; C <= end; C += step){
//         float F = C * 9/5 + 32;
//         cout << "Nhiet do " << C << " do C doi sang " << F << " do F" << endl;
//     }
// }

//bai5
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main(){
//     int n, sign = 1;
//     float sum = 0;
//     cout << "Moi nhap n: ";
//     cin >> n;
//     for(int i = 1; i <= n; i++){
//         sum += sign * (1.0 / i);
//         sign = -sign;
//     }
//     cout << fixed << setprecision(4);
//     cout << "Tong = " << sum ;

// }

//bai8
#include <iostream>
using namespace std;
int main(){
    char ans;
    long price, sum = 0, max = 0;
    int count = 0;
    do{
        cout << "Day la gia cua mon hang: ";
        cin >> price;
        count++;
        sum += price;
        if(max < price){
            max = price;
        }
        cout << "Con mua nua khong?\n";
        cout << "Hay nhap cau tra loi o day: ";
        cin >> ans;
        
    } while(ans == 'c');
    cout << "So san pham la: " << count << " mon\nTong so tien ban phai tra la: " << sum << "\nMon dat nhat ban mua co gia la: " << max;
}

