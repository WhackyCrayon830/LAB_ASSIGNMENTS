#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int h;
    cout << "Enter Base of the Diamond: ";
    cin >> h;

    char arr[2*h][2*h+1];
    memset(arr, ' ', sizeof(arr));

    int left = (2*h+1)/2;
    int right = left+1;

    for (int i = 0; i < h; i++) {
        bool printchar = true;
        for (int j = left; j < right; j++){
            if (printchar)
                arr[i][j] = '*';
            printchar = !printchar;
        }  
        left--;
        right++;
    }

    left = 2;
    right = 2*h-1;

    for (int i = h; i < 2*h; i++) {
        bool printchar = true;
        for (int j = left; j < right; j++){
            if (printchar)
                arr[i][j] = '*';
            printchar = !printchar;
        }  
        left++;
        right--;
    }
    
    for (int i = 0; i < 2*h; i++) {
        for (int j = 0; j < 2*h+1; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}