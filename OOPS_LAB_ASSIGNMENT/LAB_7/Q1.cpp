#include <iostream>
using namespace std;

class Polygon {
  protected:
    int width;
    int height;

  public:
    Polygon() {};
    Polygon(int width, int height) : width(width), height(height) {}
    void setValue(int width, int height) {
        this->width = width;
        this->height = height;
    }
};

class Rectangle : public Polygon {
  public:
    virtual int calculateArea() {
        return width * height;
    }
};

class Triangle : public Polygon {
  public:
    virtual int calculateArea() {
        return (1 / 2.0) * width * height;
    }
};

int main() {
    Polygon *ptr;
    Rectangle red;
    Triangle blue;

    red.setValue(1, 2);
    blue.setValue(1, 2);

    cout << red.calculateArea() << endl;
    cout << blue.calculateArea() << endl;
    return 0;
}