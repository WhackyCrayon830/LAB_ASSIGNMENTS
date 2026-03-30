#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:
    // Parameterized constructor
    Complex(int r, int i) {
        real = r;
        imaginary = i;
    }

    // Copy constructor
    Complex(const Complex &c) {
        real = c.real;
        imaginary = c.imaginary;
    }

    // Display function
    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }

    // Friend function declaration
    friend void sum(Complex, Complex);
};

// Friend function definition
void sum(Complex c1, Complex c2) {
    int r = c1.real + c2.real;
    int i = c1.imaginary + c2.imaginary;

    cout << "Sum = " << r << " + " << i << "i" << endl;
}

int main() {
    Complex c1(3, 4);      // parameterized constructor
    Complex c2(5, 6);

    Complex c3 = c1;       // copy constructor

    cout << "Complex Number 1: ";
    c1.display();

    cout << "Complex Number 2: ";
    c2.display();

    cout << "Copied Complex Number: ";
    c3.display();

    sum(c1, c2);           // friend function call

    return 0;
}