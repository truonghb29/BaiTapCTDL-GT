#include "iostream"

using namespace std;

long giaiThua(int n) {
    if (n == 0 || n == 1)
        return 1;
    return giaiThua(n - 1) * n;
}

int main() {
    unsigned int n;
    cout << "Nhap n:";
    cin >> n;
    cout << n << "! = " << giaiThua(n) << endl;
    return 0;
}