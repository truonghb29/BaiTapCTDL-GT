#include <iostream>

using namespace std;

void interchange(int array[], int n) {
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (array[i] > array[j]) {
                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
    }

void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "  " << array[i];
    }
    cout << "\n";
}

int main() {
    int arr[] = {-2, 45, 0, 11, -9};
    int size = sizeof(arr) / sizeof(arr[0]);
    interchange(arr, size);
    cout << "sap xep:\n";
    printArray(arr, size);
}