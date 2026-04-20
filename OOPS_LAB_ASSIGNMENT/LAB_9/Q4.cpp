#include <fstream>
using namespace std;

int main() {
  ifstream is("INPUT.txt");
  ofstream os("OUTPUT.txt");

  char ch;
  while (is.get(ch)) {
    os << ch;
  }
  is.close();
  os.close();
  return 0;
}