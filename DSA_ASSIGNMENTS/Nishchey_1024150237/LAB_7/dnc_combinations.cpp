#include <iostream>
using namespace std;

int combinations(int n, int r) {
  if (r > n)
    return 0;
  if (r == 0 || r == n)
    return 1;
  return combinations(n - 1, r - 1) + combinations(n - 1, r);
}

int main() {
  int n, r;
  cout << "Enter n and r: ";
  cin >> n >> r;
  cout << "Combinations: " << combinations(n, r);
  return 0;
}