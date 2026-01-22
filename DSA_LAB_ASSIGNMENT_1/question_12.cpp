#include <iostream>
using namespace std;

int main() {
    int max = 0;
    int arr[] = {1, 4, 5, 7, 3, 5, 7, 8};
    for(int num : arr) max = max < num ? num : max;
    cout << max << endl;
    return 0;
}