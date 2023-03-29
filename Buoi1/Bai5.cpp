#include "iostream"

using namespace std;

int demSoDuong(double arr[], int n, int i = 0, int count = 0) {
    if (i >= n) {
        return count;
    }
    if (arr[i] > 0) {
        count++;
    }
    return demSoDuong(arr, n, i + 1, count);
}

int main() {
    int n;
    cout << "Nhap so phan tu mang: ";
    cin >> n;
    double arr[n];
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    cout<<"So luong so duong trong mang la: "<<demSoDuong(arr, n);
    return 0;
}