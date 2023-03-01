#include "iostream"

using namespace std;

struct DonThuc {
    float a;
    int n;
};
typedef DonThuc DONTHUC;

void nhapDonThuc(DONTHUC &);

void xuatDonThuc(DONTHUC);

void nhapDonThuc(DONTHUC &dt) {
    cout << "Nhap he so a: ";
    cin >> dt.a;
    cout << "Nhap n: ";
    cin >> dt.n;
}

void xuatDonThuc(DONTHUC dt) {
    cout << "P(x) = " << dt.a << "x" << "^" << dt.n << endl;
}

int main() {
    DONTHUC dt;
    nhapDonThuc(dt);
    xuatDonThuc(dt);
    return 0;
}