#include <iostream>
using namespace std;

class Rectangle {
  private:
    int height;
    int width;

  public:
    Rectangle(int height, int width) : height(height), width(width) {}
    ~Rectangle() {}
    void printArea() {
        cout << "Area: " << width * height << endl;
    }
};

int main() {
    Rectangle red(20, 30);
    Rectangle *blue = new Rectangle(21, 10);
    red.printArea();
    blue->printArea();
    return 0;
}