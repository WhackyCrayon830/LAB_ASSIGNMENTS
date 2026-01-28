#include <iostream>
using namespace std;

class Rectangle{
    int height, width;

    public:
    void getdata(int height, int width){
        this->height = height;
        this->width = width;
    }
    int calculateArea(){
        return height*width;
    }
};

int main() {
    Rectangle red;
    red.getdata(4, 5);
    cout << "Area: " << red.calculateArea() << endl;
    return 0;
}