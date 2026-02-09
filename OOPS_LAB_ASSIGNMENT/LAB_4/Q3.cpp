/*
Verification of Destructor Rules in C++

(i) Name should begin with tilde (~) and must match class name.

class Demo {
public:
    ~Demo() { }        // CORRECT: Destructor name matches class name with ~

    // ~demo() { }     // WRONG: Case mismatch with class name (Demo vs demo)
    // ~Test() { }     // WRONG: Name must match exactly with class name
};


(ii) There cannot be more than one destructor in a class.

class Sample {
public:
    ~Sample() { }

    // ~Sample(int x) { }   // WRONG: Compiler error — only ONE destructor allowed
};


(iii) Destructors do not allow any parameter.

class Example {
public:
    ~Example() { }         // CORRECT

    // ~Example(int x) { } // WRONG: Destructor cannot take parameters
};


(iv) Destructors do not have any return type.

class Test {
public:
    ~Test() { }            // CORRECT

    // int ~Test() { }     // WRONG: Destructors cannot have return type
    // void ~Test() { }    // WRONG: Even "void" is not allowed
};


Working Demonstration:

#include <iostream>
using namespace std;

class DemoDestructor {
public:
    DemoDestructor() {
        cout << "Constructor called\n";
    }

    ~DemoDestructor() {
        cout << "Destructor called\n";
    }
};

int main() {
    DemoDestructor obj;
    // Destructor automatically called when object goes out of scope
    return 0;
}
*/
