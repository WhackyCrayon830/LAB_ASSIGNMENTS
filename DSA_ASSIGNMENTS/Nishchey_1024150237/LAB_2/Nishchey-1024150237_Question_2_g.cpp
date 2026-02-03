#include <iostream>
using namespace std;

void reverse(int arr[], int length){
    for (int i = 0; i < length/2; i++){
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

    print_array(sorted_test_array, length);
    reverse(sorted_test_array, length);
    cout << endl;
    print_array(sorted_test_array, length);
    return 0;
}