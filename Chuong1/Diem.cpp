#include "iostream"

using namespace std;

struct Point {
    int x, y;
};
typedef Point POINT;

void nhapDiem(POINT &p) {
    cout << " Nhap x: ";
    cin >> p.x;
    cout << "Nhap y: ";
    cin >> p.y;
}

void xuatDiem(POINT p) {
    cout << "Toa do diem (" << p.x << "," << p.y << ")" << endl;
}

int main(){
    POINT p;
    nhapDiem(p);
    xuatDiem(p);
    return 0;
}