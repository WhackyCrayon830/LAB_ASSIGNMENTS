#include <iostream>
using namespace std;

class Parent {
  public:
    int money = 203948;
};

class Child : public Parent {};

int main() {
    Child child;
    cout << child.money << endl;
    return 0;
}