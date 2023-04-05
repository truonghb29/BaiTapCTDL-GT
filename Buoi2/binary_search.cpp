

#include <iostream>

using namespace std;

void binarySearch(int array[], int x, int l, int r) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (array[mid] == x) {
            cout << x << " co vi tri la " << mid << "\n";
        }
        if (array[mid] > x) {
            return binarySearch(array, x, l, mid - 1);
        } else
            return binarySearch(array, x, mid + 1, r);
    }
}

int main(void) {
    int array[] = {3, 4, 4, 5, 6, 7, 8, 9};
    int x = 4;
    int n = sizeof(array) / sizeof(array[0]);
    binarySearch(array, x, 0, n - 1);

}