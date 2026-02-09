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
    Rectangle arr[5] = {Rectangle(10), Rectangle(), Rectangle(20, 30), Rectangle(25, 35), Rectangle(30)};

    for (Rectangle rect : arr) {
        rect.printArea();
    }
    return 0;
}