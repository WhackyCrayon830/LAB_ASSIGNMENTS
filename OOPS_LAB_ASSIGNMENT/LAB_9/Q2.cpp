#include <cctype>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream is("NOTES.txt");
  if (!is) {
    cout << "File does not exist... Exiting";
    exit(-1);
  }
  char ch;
  int counter = 0;
  while (is.get(ch)) {
    if (isalpha(ch))
      counter++;
  }
  cout << counter;
  is.close();
  return 0;
}