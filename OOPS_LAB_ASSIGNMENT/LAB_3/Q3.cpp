#include <iostream>
using namespace std;

class Dummy {
  private:
    int first;

  public:
    Dummy(int data) : first(data) {}
    void print_data() {
        cout << "First: " << first << endl;
    }

    friend int add_data(Dummy &obj1, Dummy &obj2); // Only declaration
};

int add_data(Dummy &obj1, Dummy &obj2) {
    return obj1.first + obj2.first;
}

int main() {
    Dummy test1(10), test2(20);
    cout << "Added Data: " << add_data(test1, test2) << endl;
    return 0;
}
