
#include <iostream>

using namespace std;

struct HonSo {
    int tuSo;
    int mauSo;
};
typedef HonSo HONSO;

void nhapHonSo(HONSO &);

void xuatHonSo(HONSO);

void nhapHonSo(HONSO &ps) {
    cout << " Nhap tu so: ";
    cin >> ps.tuSo;
    cout << "Nhap mau so: ";
    while (true) {
        cin >> ps.mauSo;
        if (ps.mauSo != 0 && ps.tuSo > ps.mauSo) {
            break;
        } else {
            cout << "Khong hop le! Nhap lai: ";
        }
    }
}

void xuatHonSo(HONSO ps) {
        cout << "Hon so la: " << ps.tuSo / ps.mauSo << " " << (ps.tuSo % ps.mauSo) << "/" << ps.mauSo << endl;
}
int main(){
    HONSO hs;
    nhapHonSo(hs);
    xuatHonSo(hs);
    return 0;
}


