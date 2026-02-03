/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : Implementation of the Max function
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/
                 
*/

#include <iostream>
using namespace std;

int Max(int arr[], int size){
    int max = -99999;
    for (int i = 0; i < size; i++)
        if (arr[i] > max) max = arr[i];
    return max;
}

int main() {
    int randomized_test_array[] = {3, 8, 7, 6, 9, 4, 3, 2, 1};
    int size = sizeof(randomized_test_array)/sizeof(randomized_test_array[0]);

    cout << "Max value in the array is: " << Max(randomized_test_array, size) << endl;
    return 0;
}