#include <iostream>
using namespace std;

class Rectangle {
  private:
    int height;
    int width;

  public:
    Rectangle() : height(0), width(0) {}
    Rectangle(int height, int width) : height(height), width(width) {}
    Rectangle(int size) : height(size), width(size) {}
    ~Rectangle() {}
    void printArea() {
        cout << "Area: " << width * height << endl;
    }
};

int main() {
    Rectangle red;
    Rectangle green(10);
    Rectangle blue(25, 15);

    red.printArea();
    green.printArea();
    blue.printArea();
    return 0;
}