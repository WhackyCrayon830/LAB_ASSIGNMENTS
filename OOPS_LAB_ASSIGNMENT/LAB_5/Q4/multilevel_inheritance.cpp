#include <iostream>
using namespace std;

class GrandFather {
  protected:
    int money;

  public:
    GrandFather() {
        money = 20;
    }
};

class Father : protected GrandFather {
  protected:
    int money;

  public:
    Father() {
        money = 20 + GrandFather::money;
    }
};

class Child : protected Father {
  public:
    int money;

    Child() {
        money = 15 + Father::money;
    }

    void checkBalance() {
        cout << "I have $" << money << endl;
    }
};

int main() {
    Child child;
    child.checkBalance();
    return 0;
}
