// quick sort experimentation on 100000 random integers and measuring runtime

#include <chrono>
#include <cstdlib>
#include <iostream>
#include <time.h>


using namespace std;
using namespace std::chrono;

const int N = 100000;

int partition(int arr[], int low, int high) {
  int pivot = arr[high];
  int i = low - 1;

  for (int j = low; j < high; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }

  swap(arr[i + 1], arr[high]);
  return i + 1;
}

void quicksort(int arr[], int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);

    quicksort(arr, low, pi - 1);
    quicksort(arr, pi + 1, high);
  }
}

int main() {
  int arr[N];

  srand(time(0));

  // Case A: Random numbers in range [1,100]
  for (int i = 0; i < N; i++)
    arr[i] = rand() % 100 + 1;

  auto start1 = high_resolution_clock::now();

  quicksort(arr, 0, N - 1);

  auto stop1 = high_resolution_clock::now();
  auto duration1 = duration_cast<microseconds>(stop1 - start1);

  cout << "Runtime for range [1,100]: " << duration1.count() << " microseconds"
       << endl;

  // Case B: Random numbers in range [1,10000000]
  for (int i = 0; i < N; i++)
    arr[i] = rand() % 10000000 + 1;

  auto start2 = high_resolution_clock::now();

  quicksort(arr, 0, N - 1);

  auto stop2 = high_resolution_clock::now();
  auto duration2 = duration_cast<microseconds>(stop2 - start2);

  cout << "Runtime for range [1,10000000]: " << duration2.count()
       << " microseconds" << endl;

  return 0;
}