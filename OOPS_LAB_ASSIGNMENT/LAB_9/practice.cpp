#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ofstream even("EVEN.txt");
  ofstream odd("ODD.txt");
  ifstream num("NUM.txt");
  int n;

  even.close();
  odd.close();

  while (num >> n) {
    if (n % 2 == 0) {
      even.open("EVEN.txt", ios::app);
      even << n << " ";
      even.close();
    } else {
      odd.open("ODD.txt", ios::app);
      odd << n << " ";
      odd.close();
    }
  }

  return 0;
}