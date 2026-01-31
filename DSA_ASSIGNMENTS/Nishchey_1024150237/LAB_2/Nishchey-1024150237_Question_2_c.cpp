#include <iostream>
using namespace std;

int Get(int arr[], int size, int idx){
    if (idx < size){
        return arr[idx];
    }
    else throw out_of_range("Get called on a out of bounds index");
}

int main() {
    int randomized_test_array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int length = sizeof(randomized_test_array)/sizeof(randomized_test_array[0]);
    int idx = 5;

    cout << "The value at index " << idx << " is: " << Get(randomized_test_array, length, idx) << endl;
    return 0;
}