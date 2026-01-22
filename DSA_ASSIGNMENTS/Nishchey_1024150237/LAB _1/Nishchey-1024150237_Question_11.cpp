/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : sum of an array iteratively
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/
                 
*/
#include <iostream>
using namespace std;


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 , 10};
    int sum = 0;
    for (int num : arr) sum+=num;
    cout << sum << endl;
    return 0;
}