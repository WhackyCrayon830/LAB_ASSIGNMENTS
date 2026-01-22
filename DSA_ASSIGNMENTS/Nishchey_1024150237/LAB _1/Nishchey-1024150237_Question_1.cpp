/*
Name           : Nishchey Singh
Roll Number    : 1024150237
Question       : sum of all numbers between 2 numbers (inclusive of those 2 numbers);
Acknowledgment : https://www.w3schools.com/cpp/cpp_ref_reference.asp,
                 https://www.geeksforgeeks.org/cpp/c-plus-plus/,
                 https://www.udemy.com/course/datastructurescncpp/
                 
*/

#include <iostream>
using namespace std;

int fastsum(int n) {
    if (n & 1) {
        return n * ((n + 1) >> 1);
    } else {
        return (n >> 1) * (n + 1);
    }
}

int main() {
    int first, second;

    cout << "Enter First Number: ";
    cin >> first;
    cout << "Enter Second Number: ";
    cin >> second;

    int high = (first > second) ? first : second;
    int low  = (first > second) ? second : first;

    int sum = fastsum(high) - fastsum(low - 1);

    cout << "Sum is: " << sum;
    return 0;
}
