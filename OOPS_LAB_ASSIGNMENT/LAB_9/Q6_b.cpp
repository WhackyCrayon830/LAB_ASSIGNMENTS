#include <fstream>
#include <iostream>
using namespace std;

int main() {
  fstream file("SEEKP.txt", ios::in | ios::out);
  file.seekp(4, ios::beg);
  file.put('X');
  file.close();
}