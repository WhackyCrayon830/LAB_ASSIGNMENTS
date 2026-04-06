#include <iostream>
using namespace std;

template <typename T> int linearSearch(T arr[], int n, T key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {9, 0, 7, 2, 4, 1};
    cout << linearSearch(arr, 6, 2);
    return 0;
}