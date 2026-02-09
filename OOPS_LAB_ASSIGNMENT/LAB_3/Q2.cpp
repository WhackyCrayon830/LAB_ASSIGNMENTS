#include <iostream>
using namespace std;

class Dummy {
  private:
    int first = 10;
    int second = 20;

  public:
    void print_data() {
        cout << "First: " << first << endl;
        cout << "Second: " << second << endl;
    }

    friend void swap(Dummy &obj); // Only declaration
};

void swap(Dummy &obj) {
    int temp = obj.first;
    obj.first = obj.second;
    obj.second = temp;
}

int main() {
    Dummy test;
    test.print_data();
    swap(test);
    test.print_data();
    return 0;
}
