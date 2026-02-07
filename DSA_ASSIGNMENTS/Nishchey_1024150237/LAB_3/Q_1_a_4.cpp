/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : To find if an array is sorted or not
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/
                 
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {0, 1, 1, 2, 3, 4, 5, 5, 7, 8};
    int lastDuplicate = -99999;
    cout << "Duplicates: ";
    for (int i = 1; i < arr.size(); i++){
       if (arr[i-1] == arr[i] && lastDuplicate != arr[i]){
            lastDuplicate == arr[i];
             cout << arr[i] << " ";
       } 
    }
    return 0;
}