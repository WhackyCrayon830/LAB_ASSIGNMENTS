// simple selection sort for employee IDs

#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &emp_ids) {
  int n = emp_ids.size();

  for (int i = 0; i < n; i++) {
    int smallest_index = i;

    for (int j = i + 1; j < n; j++) {
      if (emp_ids[j] < emp_ids[smallest_index]) {
        smallest_index = j;
      }
    }

    swap(emp_ids[i], emp_ids[smallest_index]);
  }
}

int main() {
  vector<int> records = {101, 102, 104, 103, 105};

  selectionSort(records);

  for (int id : records)
    cout << id << " ";

  return 0;
}