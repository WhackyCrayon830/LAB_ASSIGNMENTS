/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : Insertion in between of the array
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/
                 
*/
#include <iostream>
using namespace std;

void arr_print(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    } 
}

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int arr_length = sizeof(arr)/sizeof(arr[0]);
    int temp[arr_length + 1];

    int idx;
    cout << "Enter the location of insertion: ";
    cin >> idx;

    for (int i = 0; i < idx; i++)
        temp[i] = arr[i];

    for (int i = idx; i < arr_length + 1; i++)
        temp[i+1] = arr[i];

    temp[idx] = -1;
    arr_print(temp, arr_length + 1);
    return 0;
}