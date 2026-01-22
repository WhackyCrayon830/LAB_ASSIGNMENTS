/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : Simple merge of two array first one left, second one right
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/
                 
*/
#include <iostream>

using namespace std;

int main(){
    int arr_1[] = {1, 2, 3, 4, 5};
    int arr_2[] = {6, 7, 8, 9, 10};

    int m = sizeof(arr_1)/sizeof(arr_1[0]);
    int n = sizeof(arr_2)/sizeof(arr_2[0]);

    int* arr_res = new int[m+n];

    for (int i = 0; i < m; i++)
    {
        arr_res[i] = arr_1[i];
    }

    for (int i = m; i < m+n; i++)
    {
        arr_res[i] = arr_2[i-m];
    }
    
    for (int i = 0; i < m+n; i++)
    {
        cout << arr_res[i] << " ";
    }
    delete[] arr_res;
    return 0;
}