#include <iostream>
using namespace std;

template <typename T> void swap_var(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

class Custom {
    int data;

  public:
    Custom(int val) : data(val) {}

    void print() {
        cout << data << endl;
    }
};

int main() {
    Custom first(4);
            Custom second(3);

    swap_var(first, second);

    first.print();
    second.print();
    return 0;
}