#include <iostream>
using namespace std;

int lin_search(int arr[], int target, int len){
    for (int i = 0; i < len; i++){
        if (arr[i] == target) {
            return i;
        }
    }  
    return -1;
}

int main() {
    int arr[] = {7, 4, 5, 2, 3, 8, 9, 2, 1};
    cout << lin_search(arr, 5, sizeof(arr)/sizeof(arr[0])) << endl;
    return 0;
}