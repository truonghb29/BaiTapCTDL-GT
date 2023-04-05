/*
 * https://freetuts.net/de-quy-long-nested-recursion-2959.html
 */
#include <iostream>
using namespace std;

bool isEven(int n);
bool isOdd(int n);

bool isEven(int n){
    if(n == 0)
        return true;
    else
        return isOdd(n - 1);
}

bool isOdd(int n){
    return !isEven(n);
}
int main() {
    int n = 5;
    bool kq = isEven(n);
    if(kq == true)
        cout<<n<<" là số chẵn";
    else
        cout<<n<<" là số lẻ";
}