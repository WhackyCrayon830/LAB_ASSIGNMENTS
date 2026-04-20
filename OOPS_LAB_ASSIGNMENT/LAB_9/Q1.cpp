#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ofstream os("NUM.txt");
  for (int i = 1; i <= 200; i++) {
    os << i << " ";
  }
  os.close();
  return 0;
}