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
    int *myInt = new int;
    float *myFloat = new float;
    int *intArr = new int[5];
    Rectangle *myRect = new Rectangle(20, 14);
    Rectangle *arr = new Rectangle[5];

    // Deallocation
    delete myInt;
    delete myFloat;
    delete[] intArr;
    delete myRect;
    delete[] arr;
    return 0;
}