/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : Rotating an array by 1 index
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/
                 
*/
#include <iostream>

using namespace std;

int main(){
    int k = 1;

    int arr[] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < 3; i++)
    {
        int complement = 6 - i - 1;
        int temp = arr[i];
        arr[i] = arr[complement];
        arr[complement] = temp;
    }

        for (int i = 1; i < 3; i++)
    {
        int complement = 6 - i - 1;
        int temp = arr[i];
        arr[i] = arr[complement];
        arr[complement] = temp;
    }
    
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    
}