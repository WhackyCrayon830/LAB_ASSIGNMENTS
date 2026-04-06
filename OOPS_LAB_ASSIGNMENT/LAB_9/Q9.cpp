#include <iostream>
using namespace std;

template <typename T, typename U> class Expression {
    T a;
    U b;

  public:
    Expression(T x, U y) {
        a = x;
        b = y;
    }

    auto add() {
        return a + b;
    }

    auto subtract() {
        return a - b;
    }

    auto multiply() {
        return a * b;
    }

    auto divide() {
        return a / b;
    }
};

int main() {
    Expression my_expression(4.7, 2);
    cout << my_expression.subtract();
    return 0;
}