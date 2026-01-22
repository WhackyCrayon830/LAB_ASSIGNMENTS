/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : Linear Search in an array
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/
                 
*/
#include <iostream>
using namespace std;

int main() {
    int target;
    int arr[] = {1, 2, 3, 6, 8, 4, 7};
    cin >> target;

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if (arr[i] == target)
        {
            cout << "The index is: " << i << endl;
            break;
        }  
    }
    return 0;
}