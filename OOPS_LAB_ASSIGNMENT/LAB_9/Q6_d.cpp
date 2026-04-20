// read last char using seekg
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream is("SEEKG.txt");
  is.seekg(-1, ios::end);
  char lastChar = is.get();
  cout << "Last character: " << lastChar << endl;
  is.close();

  return 0;
}