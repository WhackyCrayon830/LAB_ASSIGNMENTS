#include <iostream>
using namespace std;

template <typename T, typename U> class Pair {
    T a;
    U b;

  public:
    Pair(T a, U b) {
        this->a = a;
        this->b = b;
    }
    void display() {
        cout << "key: " << a << " value: " << b << endl;
    }
};

int main() {
    Pair<int, float> my_pair(4, 1.4);
    my_pair.display();
    return 0;
}