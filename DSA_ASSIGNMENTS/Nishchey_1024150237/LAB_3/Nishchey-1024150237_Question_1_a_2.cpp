/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : Merging two given arrays
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/

*/

#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr_result[size1 + size2];

    int first_pointer = 0;
    int second_pointer = 0;
    int i = 0;

    while (first_pointer < size1 && second_pointer < size2) {
        if (arr1[first_pointer] <= arr2[second_pointer]) {
            arr_result[i++] = arr1[first_pointer++];
        } else {
            arr_result[i++] = arr2[second_pointer++];
        }
    }
    while (first_pointer < size1) {
        arr_result[i++] = arr1[first_pointer++];
    }
    while (second_pointer < size2) {
        arr_result[i++] = arr2[second_pointer++];
    }

    for (int num : arr_result)
        cout << num << " ";

    return 0;
}
