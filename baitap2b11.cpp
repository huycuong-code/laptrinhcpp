// cach 1
//  #include <iostream>
//  #include <vector>
//  using namespace std;
//  int main(){
//      int n;
//      cout << "Nhap so phan tu cua mang: ";
//      cin >> n;
//      vector<int> a(n);
//      cout << "Vui long nhap cac phan tu cho mang a co " << n << " phan tu: ";
//      for(int i = 0; i < n; i++){
//          cin >> a[i];
//      }
//      cout << "Mang theo chieu thuan la: ";
//      for(int i = 0; i < n; i++){
//          cout << a[i] << " ";
//      }
//      cout << "\n" << "Mang theo chieu nguoc lai la: ";
//      for(int i = n - 1; i >= 0; i--){
//          cout << a[i] << " ";
//      }
//      return 0;
//  }

// cach 2
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    vector<int> a(n);
    cout << "Vui long nhap cac phan tu cho mang a co " << n << " phan tu: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Mang theo chieu thuan la: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    int diem = n - 1;
    for (int i = 0; i < (n / 2); i++)
    {
        swap(a[i], a[diem]);
        diem--;
    }
    cout << "\n"
         << "Mang theo chieu nguoc lai la: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}