#include "iostream"

using namespace std;

struct DaThuc {
    float a;
    int n;
};
typedef DaThuc DATHUC;

void nhapDaThuc(DATHUC &);

void xuatDaThuc(DATHUC);

void nhapDaThuc(DATHUC &dt) {
    cout << "Nhap he so a: ";
    cin >> dt.a;
    cout << "Nhap n: ";
    cin >> dt.n;
}

void xuatDaThuc(DATHUC dt) {
    cout << "P(x) = ";
    do {
        cout << dt.a * dt.n << "X" << "^" << dt.n;
        dt.n--;
        if (dt.n != 0) {
            cout << " + ";
        }
    } while (dt.n != 0);
}

int main() {
    DATHUC dt;
    nhapDaThuc(dt);
    xuatDaThuc(dt);
    return 0;
}