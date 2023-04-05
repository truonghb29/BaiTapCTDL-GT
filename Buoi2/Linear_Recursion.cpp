/*
 *  Tham khảo từ: https://www.gochocit.com
 */
#include <iostream>
using namespace std;

long calc(long n, int i = 0){
    if (i == n) return n * n;
    return calc(n, i + 1) + (n * i);
}

int main(){
    cout << calc(15);
}
