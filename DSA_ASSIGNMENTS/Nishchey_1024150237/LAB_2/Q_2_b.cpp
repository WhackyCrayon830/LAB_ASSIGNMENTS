/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : Binary search on an array
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/
                 
*/

#include <iostream>
using namespace std;
int main() {
    int sorted_test_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int target;
    cout << "Enter value to search for: ";
    cin >> target ;

    int low = 0;
    int high = sizeof(sorted_test_array)/sizeof(sorted_test_array[0]) - 1;

    while (low <= high) {
        int mid = (low+high)/2;
        if (sorted_test_array[mid] == target) {
            cout << "found" << endl;
            return 0;
        }
        else if (sorted_test_array[mid] < target) {
            low = mid + 1;
        }
        else if (sorted_test_array[mid] > target) {
            high = mid - 1;
        }
    }
    cout << "Not Found" << endl;
    return 0;
}