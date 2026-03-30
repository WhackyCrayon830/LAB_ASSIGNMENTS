#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
public:

    // Right angle triangle
    double area(double base, double height) {
        return (base * height) / 2;
    }

    // Equilateral triangle
    double area(double side) {
        return (sqrt(3) / 4) * side * side;
    }

    // Isosceles triangle
    double area(double equalSide, double base, bool isIsosceles) {
        double height = sqrt(equalSide * equalSide - (base * base) / 4);
        return (base * height) / 2;
    }
};

int main() {
    Triangle t;

    cout << "Right Angle Triangle Area: " 
         << t.area(10, 5) << endl;

    cout << "Equilateral Triangle Area: " 
         << t.area(6) << endl;

    cout << "Isosceles Triangle Area: " 
         << t.area(5, 6, true) << endl;

    return 0;
}