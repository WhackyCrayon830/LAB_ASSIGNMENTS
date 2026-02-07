/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : Pair to sum in Sorted array
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/
                 
*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    unordered_set<int> complement_set;

    int k;
    int left = 0;
    int right = arr.size() - 1;

    cout << "Enter value of target sum: ";
    cin >> k;

    for (int i = 0; i < arr.size(); i++){
        if ((arr[left] + arr[right]) == k){
            cout << "Pair: " << arr[left] << " + " << arr[right] << endl;
            return 0;
        }    
        else if ((arr[left] + arr[right]) < k)
            left++;
        else if ((arr[left] + arr[right]) > k)
            right--;
    }
    cout << "Pair not found";
    return 0;
}