#include<iostream>
using namespace std;

class Stack{

    private:
    int *arr, top, cap;

    public:
    Stack(int size = 5) {
        cap = size;
        arr = new int[cap];
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int val){
        if (isFull()) {
            cout << "Stack overflow." << endl;
            return;
        }
        arr[++top] = val;
        cout << "Element " << val << " pushed onto the stack." << endl;
    }

    void pop(int val){
        if (isEmpty()) {
            cout << "Stack underflow." << endl;
            return;
        }
        cout << "Element " << arr[top--] << " popped from the stack." << endl;
    }

    int peek(int val){
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == cap - 1;
    }

    void print() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};

int main(){
    Stack s1;
    s1.push(10);
    s1.push(11);
    s1.push(12);
    s1.pop(10);
    s1.push(13);
    s1.push(14);
    s1.pop(14);
    s1.push(15);
    s1.push(16);
    s1.print();

    cout << "--------------------------------" << endl;

    Stack s2(4);
    s2.push(8);
    s2.push(6);
    // s2.peek(6);
    s2.push(9);
    s2.push(4);
    s2.pop(4);
    s2.push(64);


    return 0;
}