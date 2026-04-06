#include <iostream>
using namespace std;

template <typename T> T findMin(T arr[], int n) {
    T min = 0;
    for (int i = 0; i < n; i++) {
        min = min > arr[i] ? arr[i] : min;
    }
    return min;
}

int main() {
    int arr[] = {9, 0, 7, 2, 4, 1};
    cout << findMin(arr, 6);
    return 0;
}