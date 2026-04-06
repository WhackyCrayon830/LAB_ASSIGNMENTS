#include <iostream>

#define SIZE 10

using namespace std;

template <typename T>
class Stack {
    T *arr;
    int top;

public:
    Stack() {
        top = -1;
        arr = new T[SIZE];
    }

    void push(T a) {
        if (top >= SIZE - 1){
            cout << "\nStack Overflow\n";
            exit(-1);
        }
        arr[++top] = a;
    }

    T pop(){
        if (top == -1){
            cout << "\nStack Underflow\n";
            exit(-1);
        }
        return arr[top--];
    }
};

int main() {
    Stack<float> float_stack;

    float_stack.push(3.5);
    float_stack.push(7.2);

    cout << float_stack.pop() << endl;
    cout << float_stack.pop() << endl;

    return 0;
}