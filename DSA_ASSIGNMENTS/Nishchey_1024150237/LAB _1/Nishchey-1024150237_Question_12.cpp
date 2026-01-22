/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : index of max element in an array
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/
                 
*/
#include <iostream>
using namespace std;

int main() {
    int max = 0;
    int arr[] = {1, 4, 5, 7, 3, 5, 7, 8};
    for(int num : arr) max = max < num ? num : max;
    cout << max << endl;
    return 0;
}