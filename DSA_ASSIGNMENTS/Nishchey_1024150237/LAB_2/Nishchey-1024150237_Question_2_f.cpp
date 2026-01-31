#include <iostream>
using namespace std;

int Min(int arr[], int size){
    int min = 99999;
    for (int i = 0; i < size; i++)
        if (arr[i] < min) min = arr[i];
    return min;
}

int main() {
    int randomized_test_array[] = {3, 8, 7, 6, 9, 4, 3, 2, 1};
    int size = sizeof(randomized_test_array)/sizeof(randomized_test_array[0]);

    cout << "Min value in the array is: " << Min(randomized_test_array, size) << endl;
    return 0;
}