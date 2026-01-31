/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : Linear search on an array;
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/
                 
*/

#include <iostream>
using namespace std;

int main() {

    int arr[] = {0, 3, 6, 7, 2, 5, 9, 8};

    int target;
    cout << "Enter the target: ";
    cin >> target;

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        if (arr[i] == target)
        cout << "Target found at idx: " << i << " -> pos: " << i+1 << endl;
    }
    return 0;
}