
#include <iostream>

using namespace std;

struct PhanSo {
    int tuSo;
    int mauSo;
};

void nhapPhanSo(PhanSo &ps) {
    cout << " Nhap tu so: ";
    cin >> ps.tuSo;
    cin.ignore();
    cout << "Nhap mau so: ";
    while (true) {
        cin >> ps.mauSo;
        if (ps.mauSo != 0) {
            break;
        } else {
            cout << "Khong hop le! Nhap lai: ";
        }
    }
}

void xuatPhanSo(PhanSo phanSo) {
    cout << "Phan so vua nhap la: " << phanSo.tuSo << "/" << phanSo.mauSo << endl;
}

int main() {
    PhanSo phanSo;
    nhapPhanSo(phanSo);
    xuatPhanSo(phanSo);
    return 0;
}

