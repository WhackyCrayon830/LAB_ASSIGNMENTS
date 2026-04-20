// read from data and move to 10th byte display current position and read and
// display the remaining content
#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream file("data.txt");
  file.seekg(10);
  cout << "Current position: " << file.tellg() << endl;
  char ch;
  while (file.get(ch)) {
    cout << ch;
  }
  file.close();
  return 0;
}