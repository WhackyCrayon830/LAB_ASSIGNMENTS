#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main() {
    float arr[] = {9.1, 0, 7.4, 2, 4, 1.2};
    bubbleSort(arr, 6);

    for(auto num : arr){
        cout << num << " ";
    }
    
    return 0;
}