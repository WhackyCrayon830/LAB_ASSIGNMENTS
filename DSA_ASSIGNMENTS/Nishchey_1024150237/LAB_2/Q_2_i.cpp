#include <iostream>
using namespace std;

void Rotate(int arr[], int length, int key){
    key %= length;

    for (int i = 0; i < length/2; i++){
        int complement = length - i - 1;
        int temp = arr[i];
        arr[i] = arr[complement];
        arr[complement] = temp;
    }
    for (int i = 0; i < key/2; i++){
        int complement = key - i - 1;
        int temp = arr[i];
        arr[i] = arr[complement];
        arr[complement] = temp;
    }
    for (int i = key; i < key + (length-key)/2; i++){
        int complement = key + length - i - 1;
        int temp = arr[i];
        arr[i] = arr[complement];
        arr[complement] = temp;
    }
}

void reverse(int arr[], int start, int end){
    int length = end - start + 1;
    for (int i = start; i < length/2; i++){
        int complement = length - i - 1;
        int temp = arr[i];
        arr[i] = arr[complement];
        arr[complement] = temp;
    }
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
    cout << "Enter the number of positions to rotate by: ";
    cin >> key;

    print_array(sorted_test_array, length);
    Rotate(sorted_test_array, length, key);
    cout << endl;
    print_array(sorted_test_array, length);

    return 0;
}