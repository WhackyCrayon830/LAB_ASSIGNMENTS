#include <iostream>
using namespace std;

class B; // forward declaration

class A {
private:
    int x;

public:
    A(int a) {
        x = a;
    }

    friend int add(A, B); // friend function declaration
};

class B {
private:
    int y;

public:
    B(int b) {
        y = b;
    }

    friend int add(A, B); // friend function declaration
};

int add(A obj1, B obj2) {
    return obj1.x + obj2.y;
}

int main() {
    A objA(10);
    B objB(20);

    int result = add(objA, objB);

    cout << "Sum = " << result << endl;

    return 0;
}