#include <iostream>
using namespace std;
class NhanSu{
    protected:
    string hoTen;
    long long luongCoBan;
    public:
    NhanSu(string hoTen, long long luongCoBan){
        this->hoTen = hoTen;
        this->luongCoBan = luongCoBan;
    }
    long long tinhLuong(){
        return luongCoBan;
    }
    void inLuong(){
        cout << "Ho va ten: " << hoTen << endl;
        cout << "Muc luong nhan duoc: " << luongCoBan << endl;
    }
};

class NhanVienGio: public NhanSu {
    private:
    float soGio;
    public:
    NhanVienGio(string hoTen, long long luongCoBan, float soGio) : NhanSu(hoTen, luongCoBan){
        this->soGio = soGio;
    }
    long long tinhLuong() {
        return NhanSu::tinhLuong() + soGio * 50000;
    }   
    void inLuong(){
        cout << "Ho va ten: " << hoTen << endl;
        cout << "Muc luong nhan duoc: " << this->tinhLuong() << endl;
    }
};

class TruongPhong : public NhanSu{
    private:
    int soNVQuanLy;
    public:
        TruongPhong(string hoTen, long long luongCoBan, float soNVQuanLy) : NhanSu(hoTen, luongCoBan){
        this->soNVQuanLy = soNVQuanLy;
    }
    long long tinhLuong() {
        return NhanSu::tinhLuong() + soNVQuanLy * 300000;
    }   
    void inLuong(){
        cout << "Ho va ten: " << hoTen << endl;
        cout << "Muc luong nhan duoc: " << this->tinhLuong() << endl;
    }
};

int main(){
    NhanVienGio nvg1("An", 5000000, 20);
    cout << nvg1.tinhLuong() << endl;
    nvg1.inLuong();
    TruongPhong TP1("Binh", 8000000, 5);
    cout << TP1.tinhLuong() << endl;
    TP1.inLuong();
}
