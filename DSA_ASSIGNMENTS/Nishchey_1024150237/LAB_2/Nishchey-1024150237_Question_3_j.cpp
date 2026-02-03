#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int h;
    cout << "Enter the base of the hourglass: ";
    cin >> h;

    char arr[2*h - 1][2*h];
    memset(arr, ' ', sizeof(arr));

    int left = 0;
    int right = 2*h - 1;

    for (int i = 0; i < h; i++) {
        bool printchar = true;
        for (int j = left; j < right; j++) {
            if (printchar)
                arr[i][j] = '*';
            printchar = !printchar;
        }
        left++;
        right--;
    }

    left -= 2;
    right += 2;

    for (int i = h; i < 2*h - 1; i++) {
        bool printchar = true;
        for (int j = left; j < right; j++) {
            if (printchar)
                arr[i][j] = '*';
            printchar = !printchar;
        }
        left--;
        right++;
    }

    for (int i = 0; i < 2*h - 1; i++) {
        for (int j = 0; j < 2*h; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}
