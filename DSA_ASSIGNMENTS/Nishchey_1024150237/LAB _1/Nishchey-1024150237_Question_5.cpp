
#include <iostream>
#include <string>

using namespace std;

void printnumber(const string &s){
    cout << s;
}

int main(){
    int input;
    cout << "Enter an integer (1-9): ";
    if (!(cin >> input)) {
        cerr << "Invalid input\n";
        return 1;
    }

    const string names[9] = {
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine"
    };

    if (input < 1 || input > 9) {
        cerr << "Input out of range (1-9)\n";
        return 1;
    }

    cout << "Your Number: ";
    printnumber(names[input-1]);
    cout << '\n';
    return 0;
}
