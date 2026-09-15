#include <iostream>
#include <string>
using namespace std;
class TaiKhoanNganHang {
    private:
    string sotaikhoan, chutaikhoan;
    long long sodu = 0;
    public:
    TaiKhoanNganHang(string stk, string ctk, long long du){
        sotaikhoan = stk;
        chutaikhoan = ctk;
        sodu = du;
    }
    string getstk(){
        return sotaikhoan;
    }
    string getctk(){
        return chutaikhoan;
    }

    void setnaptien(long long sotien){
        if(sotien > 0){
            sodu += sotien;
        }
    }
    void setruttien(long long sotien){
        if(sotien <= sodu){
            sodu -= sotien;
        }
    }
    long long getsodu(){
        return sodu;
    }
};
int main(){
    string stk, ctk;
    long long sodu = 0, nap, rut;
    cout << "Hay nhap dung so tai khoan de dang nhap: ";
    getline(cin, stk);
    cout << "Hay nhap dung ten chu tai khoan de dang nhap: ";
    getline(cin, ctk);
    TaiKhoanNganHang ctk1(stk, ctk, sodu);
    cout << "Xuat thong tin: " << endl;
    cout << "So tai khoan: " << ctk1.getstk() << endl;
    cout << "Ten chu tai khoan: " << ctk1.getctk() << endl;
    cout << "So du hien tai: " << ctk1.getsodu() << endl;
    cout << "Nhap so tien muon nap them: ";
    cin >> nap;
    ctk1.setnaptien(nap);
    cout << "So du sau khi nap la: " << ctk1.getsodu() << endl;
    cout << "Nhap so tien muon rut: ";
    cin >> rut;
    ctk1.setruttien(rut);
    cout << "So du sau khi rut la: " << ctk1.getsodu();
    return 0;
}