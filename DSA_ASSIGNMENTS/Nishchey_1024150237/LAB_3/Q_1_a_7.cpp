#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {3, 2, 5, 7, 4, 1, 0, 9, 5, 2, 3};

    int max = -99999, min = 99999;

    for (int i = 0; i < arr.size(); i++){
        max = arr[i] > max ? arr[i] : max;
        min = arr[i] < min ? arr[i] : min;
    }

    cout << "Min: " << min << " | " << "Max: " << max;
    return 0;
}