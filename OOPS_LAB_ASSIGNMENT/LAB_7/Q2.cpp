#include <iostream>
using namespace std;

class Shape {
public:
    virtual int calculateArea() = 0;
    virtual void name() = 0;
    virtual void setData(int a, int b = 0) = 0;
};

class Circle : public Shape {
private:
    int radius;

public:
    int calculateArea() {
        return (22 * radius * radius) / 7;
    }

    void name() {
        cout << "Circle" << endl;
    }

    void setData(int r, int b = 0) {
        radius = r;
    }
};

class Rectangle : public Shape {
private:
    int width, height;

public:
    int calculateArea() {
        return width * height;
    }

    void name() {
        cout << "Rectangle" << endl;
    }

    void setData(int w, int h) {
        width = w;
        height = h;
    }
};

class Triangle : public Shape {
private:
    int base, height;

public:
    int calculateArea() {
        return (base * height) / 2;
    }

    void name() {
        cout << "Triangle" << endl;
    }

    void setData(int b, int h) {
        base = b;
        height = h;
    }
};

int main() {
    Triangle tri;
    Circle c;
    c.setData(4);
    tri.setData(10,20);
    tri.name();
    cout << tri.calculateArea() << endl;
    c.name();
    cout << c.calculateArea();
}