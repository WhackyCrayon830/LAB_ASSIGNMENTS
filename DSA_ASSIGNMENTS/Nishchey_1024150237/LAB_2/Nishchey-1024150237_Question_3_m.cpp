#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int h;
    cout << "Enter height of the palindrome pyramid: ";
    cin >> h;

    char arr[h][2*h - 1];
    memset(arr, ' ', sizeof(arr));

    for (int i = 0; i < h; i++) {
        int start = h - i - 1;

        // increasing part
        for (int j = 0; j <= i; j++) {
            arr[i][start + j] = char('1' + i + j);
        }

        // decreasing part
        for (int j = i - 1; j >= 0; j--) {
            arr[i][start + (2*i - j)] = char('1' + i + j);
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < 2*h - 1; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}
