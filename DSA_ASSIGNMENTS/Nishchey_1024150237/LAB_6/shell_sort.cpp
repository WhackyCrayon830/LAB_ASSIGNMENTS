// shell sort implementation

#include <iostream>
#include <vector>
using namespace std;

void shellSort(vector<int> &arr) {
  int n = arr.size();

  for (int gap = n / 2; gap > 0; gap /= 2) {
    for (int i = gap; i < n; i++) {

      int temp = arr[i];
      int j = i;

      while (j >= gap && arr[j - gap] > temp) {
        arr[j] = arr[j - gap];
        j -= gap;
      }

      arr[j] = temp;
    }
  }
}

int main() {
  vector<int> data = {12, 34, 54, 2, 3};

  shellSort(data);

  for (int x : data)
    cout << x << " ";

  return 0;
}