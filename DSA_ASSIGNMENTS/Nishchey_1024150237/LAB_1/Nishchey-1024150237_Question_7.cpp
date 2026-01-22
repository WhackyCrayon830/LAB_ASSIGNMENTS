/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : Index of the maximum number
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/
                 
*/
#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 6, 5, 4};

    int idx;

    for (int i = 0; i < 6; i++)
    {
        int max = 0;
        if (max < arr[i]){
            max = arr[i];
            idx = i;
        }
    }
    cout << "Index is: " << idx;
    
}