/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : Min and max in a single pass of an array
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/
                 
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {3, 2, 5, 7, 4, 1, 0, 9, 5, 2, 3};

    int max = -99999, min = 99999;

    for (int i = 0; i < arr.size(); i++) {
        max = arr[i] > max ? arr[i] : max;
        min = arr[i] < min ? arr[i] : min;
    }

    cout << "Min: " << min << " | " << "Max: " << max;
    return 0;
}