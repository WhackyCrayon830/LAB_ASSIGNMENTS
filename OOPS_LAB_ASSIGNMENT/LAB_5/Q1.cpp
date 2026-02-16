#include <iostream>
using namespace std;

class Parent {
  public:
    void say() {
        cout << "Parent has been called." << endl;
    }

    void work() {
        cout << "Only the parent will work" << endl;
    }
};

class Child : public Parent {
  public:
    void say() {
        cout << "Child has been called." << endl;
    }

    void work() {
        cout << "Only the parent will work" << endl;
    }
};

int main() {
    Parent superclass;
    Child derivedclass;

    superclass.say();
    derivedclass.say();

    superclass.work();
    derivedclass.work();
    return 0;
}