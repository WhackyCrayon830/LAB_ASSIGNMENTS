#include <iostream>
using namespace std;

namespace First {
    int value = 10;
    void display() {
        cout << "First namespace value = " << value << endl;
    }
}
namespace Second {
    int value = 20;
    void display() {
        cout << "Second namespace value = " << value << endl;
    }
}
int main() {
    First::display();
    Second::display();

    cout << First::value << endl;
    cout << Second::value << endl;
}