// restoring sorted order for employee IDs

#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &emp_ids) {
  for (int i = 1; i < emp_ids.size(); i++) {
    int current = emp_ids[i];
    int j = i - 1;

    while (j >= 0 && emp_ids[j] > current) {
      emp_ids[j + 1] = emp_ids[j];
      j--;
    }

    emp_ids[j + 1] = current;
  }
}

int main() {
  vector<int> records = {101, 102, 104, 103, 105};

  insertionSort(records);

  for (int id : records)
    cout << id << " ";

  return 0;
}