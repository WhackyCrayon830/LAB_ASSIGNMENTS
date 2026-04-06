#include <iostream>
using namespace std;

template <typename T> class Array {
    T *arr;
    int n;

  public:
    void input(int size) {
        cout << "Enter the values: ";
        n = size;
        arr = new T[size];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    }

    void display() {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    ~Array() {
        delete[] arr;
    }
};

int main() {
    Array<float> arr;
    arr.input(10);
    arr.display();
    return 0;
}