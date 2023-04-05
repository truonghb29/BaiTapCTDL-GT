#include <iostream>
using namespace std;

int linearSearch(int array[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (array[i] == x)
            cout<<x<<" co vi tri la "<< i<<"\n";
    return -1;
}

int main() {
    int array[] = {2, 2, 4, 0, 1, 9};
    int x = 2;
    int n = sizeof(array) / sizeof(array[0]);

    int result = linearSearch(array, n, x);

    if(result == -1)
        cout << "khong co" ;
}