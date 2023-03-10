#include <cmath>
#include "iostream"

using namespace std;

int giaiThua(int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    return giaiThua(n - 1) * n;
}

double tong(int x, int n, double s = 0) {
    if (n == 0) {
        return s;
    } else
        s += (pow(x,n))/ giaiThua(n);

    return tong(x,n - 1, s);
}

int main() {
    int x, n;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    cout<<"S("<<x<<","<<n<<") ="<<tong(x,n);
}