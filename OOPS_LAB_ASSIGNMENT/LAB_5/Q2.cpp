#include <iostream>
using namespace std;

class Parent {
  protected:
    string familySecret = "We are very rich";
};

class Child : public Parent {
  public:
    void spillFamilySecret() {
        cout << familySecret << endl;
    }
};

int main() {
    Child child;
    child.spillFamilySecret();
    return 0;
}