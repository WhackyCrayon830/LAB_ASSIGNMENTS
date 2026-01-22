#include <iostream>
using namespace std;

class Rectangle{
    int length;
    int breadth;

    public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    int perimeter() {
        return 2*(length+breadth);
    }
    int area() {
        return length*breadth;
    }
};

int main() {
    Rectangle first(20, 30);
    cout << "Perimeter is: " << first.perimeter() << endl;
    cout << "Area is: " << first.area() << endl;
    return 0;
}