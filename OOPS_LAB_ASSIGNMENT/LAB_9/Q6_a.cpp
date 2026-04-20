#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream is("SEEKG.txt");
  char ch;
  is.seekg(9);
  is.get(ch);
  cout << ch;
  is.close();
  return 0;
}