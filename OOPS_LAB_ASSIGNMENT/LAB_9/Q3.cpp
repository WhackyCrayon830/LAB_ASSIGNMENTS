#include <iostream>
using namespace std;

template <typename T> T findMax(T arr[], int n) {
    T max = 0;
    for (int i = 0; i < n; i++) {
        max = max < arr[i] ? arr[i] : max;
    }
    return max;
}

int main() {
    int arr[] = {9, 0, 7, 2, 4, 1};
    cout << findMax(arr, 6);
    return 0;
}