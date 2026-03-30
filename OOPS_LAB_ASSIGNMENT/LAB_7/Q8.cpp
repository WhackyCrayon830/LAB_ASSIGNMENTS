#include <iostream>
using namespace std;

class Array {
    int arr[5];

public:
    int& operator[](int index) {
        if(index < 0 || index >= 5) {
            cout << "Index out of bounds\n";
            exit(0);
        }
        return arr[index];
    }
};

int main() {
    Array a;

    for(int i=0;i<5;i++)
        a[i] = i+1;

    for(int i=0;i<5;i++)
        cout << a[i] << " ";

    cout << endl;
    cout << a[7];

    return 0;
}