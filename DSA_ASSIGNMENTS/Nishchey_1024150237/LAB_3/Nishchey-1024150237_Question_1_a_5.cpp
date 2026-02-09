/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : Pair to sum in Unsorted Array
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/

*/

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {3, 2, 5, 7, 4, 1, 0, 9, 5, 2, 3};
    unordered_set<int> complement_set;

    int k;
    cout << "Enter value of target sum: ";
    cin >> k;

    for (int i = 0; i < arr.size(); i++) {
        auto it = complement_set.find(arr[i]);
        if ((it != complement_set.end())) {
            cout << "Pair: " << k - *it << " + " << *it;
            return 0;
        }
        complement_set.insert(k - arr[i]);
    }
    cout << "Pair not found";
    return 0;
}