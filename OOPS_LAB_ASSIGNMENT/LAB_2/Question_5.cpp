#include <iostream>
using namespace std;

class Complex{
    float real, imaginary;

    public:
    Complex(float r, float i){
        real = r;
        imaginary = i;
    }
    void setComplex(float real, float imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }
    void displayComplex(){
        string sign = (imaginary >= 0) ? "+" : "-";
        cout << real << sign << "i" << imaginary << endl;
    }

    Complex operator +(const Complex & other){
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    Complex operator -(const Complex & other){
        return Complex(real - other.real, imaginary - other.imaginary);
    }
};

int main() {
    Complex first(3, 4);
    Complex second (4, 7);

    Complex result = second - first;

    first.displayComplex();
    second.displayComplex();
    result.displayComplex();
    return 0;
}