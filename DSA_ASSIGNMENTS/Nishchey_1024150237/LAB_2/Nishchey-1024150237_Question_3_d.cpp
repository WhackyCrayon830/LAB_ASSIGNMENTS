#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int h;
    cout << "Enter height of the flipped inverted pyramid: ";
    cin >> h;

    char arr[h][h];
    memset(arr, ' ', sizeof(arr));

    for (int i = 0; i <= h; i++) {
        for (int j = h-1; j >= i; j--){
            arr[i][j] = '*';
        }  
    }
    
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < h; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}