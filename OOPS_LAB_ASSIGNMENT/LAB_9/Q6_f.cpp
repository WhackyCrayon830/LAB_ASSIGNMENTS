#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ofstream os("HW.txt");
  string text = "Hello World";
  for (char c : text) {
    os.put(c);
    cout << "Current position: " << os.tellp() << endl;
  }
  os.close();
  os.open("HW.txt", ios::in | ios::out);
  os.seekp(6, ios::beg);
  os.put('C');
  os.put('+');
  os.put('+');
  os.put(' ');
  os.put(' ');
  os.close();

  ifstream is("HW.txt");
  char ch;
  while (is.get(ch)) {
    cout << ch;
  }
  is.close();
  return 0;
}