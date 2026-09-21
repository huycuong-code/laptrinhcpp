// BTVN buổi 19 Hệ thống phương tiện giao thông (nâng cao, khuyến khích):
// Đề bài: Viết chương trình (file baitap5.cpp) xây dựng lớp cha PhuongTien (hangSX, vanToc) và 3 lớp con XeMay,
//  OTo, XeTai với thuộc tính riêng phù hợp. Mỗi lớp con ghi đè phương thức thongTin() 
//  và có phương thức tinhThoiGian(quangDuong) riêng. 
//  Tạo 1 mảng gồm 3 đối tượng của 3 lớp con rồi duyệt mảng in thông tin từng phương tiện.
#include <iostream>
#include <string>
using namespace std;
class PhuongTien{
    protected:
    string hangSX;
    double vanToc;
    public:
    PhuongTien(string hangSX, double vanToc){
        this->hangSX = hangSX;
        this->vanToc = vanToc;
    }
    void thongtin(){
        cout << "Hang san xuat: " << hangSX << endl;
        cout << "Toc do toi da: " << vanToc << " km/h" << endl;
    }    
    double tinhthoigian(int quangduong){
        return quangduong / vanToc;
    }
};

//Xe may
class xeMay : public PhuongTien{
    private:
    int sobanhxe;
    public:
    xeMay(string hang, double vantoc, int sobanh) : PhuongTien(hang, vantoc){
        sobanhxe = sobanh;
    }
    void thongtin(){
        cout << "Loai phuong tien: xe may" << endl;
        cout << "Hang san xuat: " << hangSX << endl;
        cout << "Van toc toi da: " << vanToc << endl;
        cout << "So banh xe: " << sobanhxe << endl; 
    }
    double tinhthoigian(double quangduong){
        return quangduong / vanToc;
    }
};

//OTO
class oTo : public PhuongTien{
    private:
    int dungtichxilanh;
    int sochongoi;
    public:
    oTo(string hang, double vantoc, int dungtichxilanh, int sochongoi) : PhuongTien(hang, vantoc){
        this->dungtichxilanh = dungtichxilanh;
        this->sochongoi = sochongoi;
    }
    void thongtin(){
        cout << "Loai phuong tien: o to" << endl;
        cout << "Hang san xuat: " << hangSX << endl;
        cout << "Van toc toi da: " << vanToc << endl;
        cout << "dung tich xi lanh cua xe: " << dungtichxilanh << "cc" << endl; 
        cout << "So cho ngoi: " << sochongoi << endl;
    }
    double tinhthoigian(double quangduong){
        return quangduong / vanToc;
    }
};

class xeTai : public PhuongTien{
    private:
    int dungtichxilanh;
    int sochongoi;
    int sothungchohang;
    public:
    xeTai(string hang, double vantoc, int dungtichxilanh, int sochongoi, int sothungchohang) : PhuongTien(hang, vantoc){
        this->dungtichxilanh = dungtichxilanh;
        this->sochongoi = sochongoi;
        this->sothungchohang = sothungchohang;
    }
    void thongtin(){
        cout << "Loai phuong tien: o to" << endl;
        cout << "Hang san xuat: " << hangSX << endl;
        cout << "Van toc toi da: " << vanToc << endl;
        cout << "dung tich xi lanh cua xe: " << dungtichxilanh << "cc" << endl; 
        cout << "So cho ngoi: " << sochongoi << endl;
        cout << "So thung cho hang cua xe: " << sothungchohang << endl;
    }
    double tinhthoigian(double quangduong){
        return quangduong / vanToc;
    }
};

int main(){
    xeMay xm1("Honda",100, 2);
    xm1.thongtin();
    cout << "Thoi gian di het quang duong la: " <<xm1.tinhthoigian(100) << "h" << endl;
    oTo ot1("BMW", 300, 330, 2);
    ot1.thongtin();
    cout << "Thoi gian di het quang duong la: " <<ot1.tinhthoigian(100) << "h" << endl;
    xeTai xtai1("Huyndai", 160, 220, 4, 1);
    xtai1.thongtin();
    cout << "Thoi gian di het quang duong la: " <<xtai1.tinhthoigian(100) << "h" << endl;
    return 0;
}
