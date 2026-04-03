#include <iostream>
using namespace std;

int linear_search(int a[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11, 90, 55, 43, 88, 19};
    cout << ((linear_search(arr, 10, 88) != -1) ? "Found" : "Not Found");
    return 0;
}