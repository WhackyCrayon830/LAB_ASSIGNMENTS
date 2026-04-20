#include <fstream>
#include <iostream>

using namespace std;

int main() {
  string input;
  cout << "Enter a string: ";
  cin >> input;

  int length = input.length();
  ofstream os("IO.txt");
  os << input;
  os.close();
  ifstream is("IO.txt");
  char ch;
  cout << "Writing from the file: ";
  while (is.get(ch)) {
    cout << ch;
  }
  return 0;
}