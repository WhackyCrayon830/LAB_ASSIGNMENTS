#include <iostream>
#include "../LIBRARY/IntArray.h"

using namespace std;

int main() {
    int data;
    IntArray arr(7);
    arr = {1, 2, 3, 4, 5, 6, 7};
    
    //User input
    cout << "Enter value to enter: ";
    cin >> data;

    //creating a new arr and adding stuff
    IntArray temp(arr.getSize() + 1);
    temp.copyData(arr, 1);
    temp[0] = data;

    temp.print();
    return 0;
}