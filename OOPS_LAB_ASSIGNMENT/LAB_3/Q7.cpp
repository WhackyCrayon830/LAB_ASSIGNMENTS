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

    friend void alterDataByReference(Dummy &obj);
    friend void alterDataByValue(Dummy obj);
};

void alterDataByReference(Dummy &obj) {
    obj.first = -1;
}
void alterDataByValue(Dummy obj) {
    obj.first = -1;
    cout << "Object copy of test2 altered value: ";
    cout << obj.first << endl;
}

int main() {
    Dummy test1(20), test2(20); // Both have value 20;
    alterDataByReference(test1);
    test1.print_data();
    alterDataByValue(test2);
    test2.print_data();
    return 0;
}
