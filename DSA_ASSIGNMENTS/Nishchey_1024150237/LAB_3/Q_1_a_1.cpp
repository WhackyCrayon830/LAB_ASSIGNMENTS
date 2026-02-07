/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : To find if an array is sorted or not
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/
                 
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    bool sorted = true;

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]) - 1; i++)
        if (arr[i] > arr[i+1]){sorted = false; break;}
        
    cout << "Sorted:" << (sorted ? "true" : "false") << endl;
    return 0;
}