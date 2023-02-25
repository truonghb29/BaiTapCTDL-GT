

#include <iostream>

using namespace std;

struct THANHPHO {
    int maTP;
    char tenTP[31];
    float dienTich;
};

void nhapThanhPho(THANHPHO &tp) {
    cout << "Nhập mã thành phố: ";
    cin >> tp.maTP;
    cin.ignore(); // dùng để xóa kí tự '\n'
    cout << "Nhập tên thành phố: ";
    cin.getline(tp.tenTP, 31);
    cout << "Nhập diện tích: ";
    cin >> tp.dienTich;
}

void xuatThanhPho(THANHPHO tp) {
    cout << "Mã thành phố: " << tp.maTP << endl;
    cout << "Tên thành phố: " << tp.tenTP << endl;
    cout << "Diện tích: " << tp.dienTich << endl;
}

int main() {
    THANHPHO tp;
    nhapThanhPho(tp);
    cout << "\nThông tin thành phố vừa nhập:" << endl;
    xuatThanhPho(tp);
    return 0;
}

