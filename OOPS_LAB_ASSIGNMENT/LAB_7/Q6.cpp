#include <iostream>
using namespace std;

class STRING {
  private:
    string str;

  public:
    STRING(string data) {
        str = data;
    }

    STRING operator+(STRING other) {
        return STRING(str+other.str);
    }

    bool operator==(STRING other) {
        return (str == other.str);
    }
};

int main() {
    STRING str1("Hwllo");
    STRING str2("Hwllo");
    STRING str3("Hwllo");

    cout << (str1 == str2);
    return 0;
}