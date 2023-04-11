#include "iostream"

using namespace std;
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

// Kiểm tra xem ngăn xếp có đầy hay không
bool isFull() {
    return top == MAX_SIZE - 1;
}

// Kiểm tra xem ngăn xếp có rỗng hay không
bool isEmpty() {
    return top == -1;
}

// Thêm một phần tử vào đỉnh ngăn xếp
void push(int item) {
    if (isFull()) {
        cout << "Stack is full!" << endl;
        return;
    }
    stack[++top] = item;
}

// Xóa một phần tử từ đỉnh ngăn xếp
int pop() {
    if (isEmpty()) {
        cout << "Stack is empty!" << endl;
        return -1;
    }
    return stack[top--];
}

// Lấy giá trị của phần tử đầu tiên trong ngăn xếp
int peek() {
    if (isEmpty()) {
        cout << "Stack is empty!" << endl;
        return -1;
    }
    return stack[top];
}

int main(){
    int a[] = {1,3,4,5,2,0};
    int n = sizeof(a)/ sizeof(a[0]);
    for(int i = 0 ; i< n; i++){
        push(a[i]);
    }
    for(int i = 0; i< n; i++){
        cout<<pop()<<"\n";
    }
    return 0;
}