#include "iostream"

using namespace std;

struct Point3D {
    int x, y, z;
};
typedef Point3D POINT3D;

void nhapDiem(POINT3D &p) {
    cout << "Nhap x: ";
    cin >> p.x;
    cout << "Nhap y: ";
    cin >> p.y;
    cout << "Nhap z: ";
    cin >> p.z;
}

void xuatDiem(POINT3D p) {
    cout << "Toa do diem (" << p.x << "," << p.y << "," << p.z << ")" << endl;
}

int main() {
    POINT3D p;
    nhapDiem(p);
    xuatDiem(p);
    return 0;
}