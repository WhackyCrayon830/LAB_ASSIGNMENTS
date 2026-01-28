#include <iostream>
using namespace std;

class Test{
    public:
    static int val;
    void show();
};

void Test::show(){
    cout << "Function declared outside class with scope" << endl;
}

int x = 15;
int Test::val = 10;

int main() {
    int x = 10;

    //accessing static variables
    cout << Test::val << endl;

    //global local scope resolution with scope resolution operator
    cout << "Local: " << x << endl;
    cout << "Global:" << ::x << endl;

    //Declaration of function outside of class
    Test test;
    test.show();

    //Use of standard libraries
    std::cout << "Hello there" << std::endl;
    return 0;
}