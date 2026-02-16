#include <iostream>
using namespace std;

class Mother {
  protected:
    int money = 203948;
};

class Father {
  protected:
    int money = 123948;
};

class Child : public Mother, public Father {
  public:
    int money = Mother::money + Father::money;
};

int main() {
    Child child;
    cout << child.money << endl;
    return 0;
}