/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : Insertion at the end of an array
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/
                 
*/

#include <iostream>
#include "../LIBRARY/IntArray.h"

using namespace std;

int main() {
    int data;
    IntArray arr(7);
    arr = {1, 2, 3, 4, 5, 6, 7};
    
    //User input
    cout << "Enter value to enter: ";
    cin >> data;

    IntArray temp(arr.getSize() + 1);
    temp.copyData(arr, 0);
    temp[arr.getSize()] = data;

    temp.print();
    return 0;
}