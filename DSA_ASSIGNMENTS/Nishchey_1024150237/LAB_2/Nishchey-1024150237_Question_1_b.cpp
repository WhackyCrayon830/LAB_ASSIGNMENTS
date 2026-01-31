/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : Insertion at end of the array
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

    int input;
    cout << "Enter value of the element: ";
    cin >> input;

    for (int i = 0; i < arr_length; i++)
    {
        temp[i] = arr[i];
    }

    temp[arr_length] = input;

    arr_print(temp, arr_length + 1);
    return 0;
}