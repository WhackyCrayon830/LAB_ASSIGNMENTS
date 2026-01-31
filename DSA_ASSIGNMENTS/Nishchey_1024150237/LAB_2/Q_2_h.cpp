#include <iostream>
using namespace std;

void Shift(int arr[], int length, int key){
    for (int i = 0; i < length - key; i++)
        arr[i] = arr[i+key];
    
    for (int i = 0; i < key; i++)
        arr[length-i-1] = 0;
}


void print_array(int arr[], int length){
    for (int i = 0; i < length; i++) {
        cout << " " << arr[i];
    }
}

int main() {
    int sorted_test_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = sizeof(sorted_test_array)/sizeof(sorted_test_array[0]);

    int key;
    cout << "Enter the number of positions to shift by: ";
    cin >> key;

    print_array(sorted_test_array, length);
    Shift(sorted_test_array, length, key);
    cout << endl;
    print_array(sorted_test_array, length);

    return 0;
}