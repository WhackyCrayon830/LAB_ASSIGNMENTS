#include <fstream>
#include <iostream>

using namespace std;

// finding size of the file using tellg()
int main() {
  ifstream file("SEEKP.txt");
  file.seekg(0, ios::end);
  long long size = file.tellg();
  cout << "Size of the file: " << size << " bytes" << endl;
  file.close();
  return 0;
}