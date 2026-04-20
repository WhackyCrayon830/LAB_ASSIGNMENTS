#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ofstream even("EVEN.txt");
  ofstream odd("ODD.txt");

  for (int i = 1; i <= 200; i++) {
    if (i % 2 == 0) {
      even << i << endl;
    } else {
      odd << i << endl;
    }
  }

  even.close();
  odd.close();

  return 0;
}