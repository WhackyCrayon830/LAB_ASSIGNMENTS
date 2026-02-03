/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : Pattern Printing Questions with a input of 5;
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/
                 
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int h;
    cout << "Enter height of the simple pyramid: ";
    cin >> h;

    char arr[h][h];
    memset(arr, ' ', sizeof(arr));

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < i+1; j++){
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